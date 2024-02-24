#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Options-Graphics.Options-Graphics_C
// (None)

class UClass* UOptionsMinusGraphics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Options-Graphics_C");

	return Clss;
}


// Options-Graphics_C Options-Graphics.Default__Options-Graphics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMinusGraphics_C* UOptionsMinusGraphics_C::GetDefaultObj()
{
	static class UOptionsMinusGraphics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMinusGraphics_C*>(UOptionsMinusGraphics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Options-Graphics.Options-Graphics_C.SetUICustomPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::SetUICustomPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICustomPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.LoadCustomSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomUserSettings_C*       CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomUserSettings_C*       K2Node_DynamicCast_AsCustom_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::LoadCustomSettings(class UCustomUserSettings_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCustomUserSettings_C* K2Node_DynamicCast_AsCustom_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "LoadCustomSettings");

	Params::UOptionsMinusGraphics_C_LoadCustomSettings_Params Parms{};

	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsCustom_User_Settings = K2Node_DynamicCast_AsCustom_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.FindPresetByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsFound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGraphicsPreset             Preset                                                           (Parm, OutParm, HasGetValueTypeHash)
// int32                              PresetID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGraphicsPreset             CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::FindPresetByName(class FText PresetName, bool* IsFound, struct FGraphicsPreset* Preset, int32* PresetID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FGraphicsPreset& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "FindPresetByName");

	Params::UOptionsMinusGraphics_C_FindPresetByName_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (Preset != nullptr)
		*Preset = std::move(Parms.Preset);

	if (PresetID != nullptr)
		*PresetID = Parms.PresetID;

}


// Function Options-Graphics.Options-Graphics_C.GeneratePresetItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::GeneratePresetItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "GeneratePresetItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurrentPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::SetUICurrentPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurrentPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.ApplyPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PresetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        PresetLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::ApplyPreset(int32 PresetID, class FText PresetLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "ApplyPreset");

	Params::UOptionsMinusGraphics_C_ApplyPreset_Params Parms{};

	Parms.PresetID = PresetID;
	Parms.PresetLabel = PresetLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.ApplyFPSDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::ApplyFPSDisplay(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "ApplyFPSDisplay");

	Params::UOptionsMinusGraphics_C_ApplyFPSDisplay_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurrentFPSDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::SetUICurrentFPSDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurrentFPSDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurrentVSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::SetUICurrentVSync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurrentVSync");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurrentScalabilityLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentItemByIndex_Succeded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::SetUICurrentScalabilityLevel(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurrentScalabilityLevel");

	Params::UOptionsMinusGraphics_C_SetUICurrentScalabilityLevel_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetCurrentItemByIndex_Succeded = CallFunc_SetCurrentItemByIndex_Succeded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurrentScreenResolution
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentItemByIndex_Succeded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::SetUICurrentScreenResolution(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_SetCurrentItemByIndex_Succeded, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurrentScreenResolution");

	Params::UOptionsMinusGraphics_C_SetUICurrentScreenResolution_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_SetCurrentItemByIndex_Succeded = CallFunc_SetCurrentItemByIndex_Succeded;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurrentScreenMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentItemByIndex_Succeded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::SetUICurrentScreenMode(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurrentScreenMode");

	Params::UOptionsMinusGraphics_C_SetUICurrentScreenMode_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SetCurrentItemByIndex_Succeded = CallFunc_SetCurrentItemByIndex_Succeded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.SetUICurentMaxFramerate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BestIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::SetUICurentMaxFramerate(int32 BestIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "SetUICurentMaxFramerate");

	Params::UOptionsMinusGraphics_C_SetUICurentMaxFramerate_Params Parms{};

	Parms.BestIndex = BestIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.FilterItemsBySupportedResolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ValidItems                                                       (Edit, BlueprintVisible)
// TSet<struct FIntPoint>             AvailableResolutions                                             (Edit, BlueprintVisible)
// TArray<struct FIntPoint>           ValidResolutions                                                 (Edit, BlueprintVisible)
// TArray<struct FIntPoint>           TargetResolutions                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::FilterItemsBySupportedResolutions(const TArray<class FText>& ValidItems, TSet<struct FIntPoint> AvailableResolutions, const TArray<struct FIntPoint>& ValidResolutions, const TArray<struct FIntPoint>& TargetResolutions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FIntPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, class FText CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "FilterItemsBySupportedResolutions");

	Params::UOptionsMinusGraphics_C_FilterItemsBySupportedResolutions_Params Parms{};

	Parms.ValidItems = ValidItems;
	Parms.AvailableResolutions = AvailableResolutions;
	Parms.ValidResolutions = ValidResolutions;
	Parms.TargetResolutions = TargetResolutions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnMaxFramerateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnMaxFramerateChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnMaxFramerateChanged");

	Params::UOptionsMinusGraphics_C_OnMaxFramerateChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateMaxFramerate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FrameRate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateMaxFramerate(double FrameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateMaxFramerate");

	Params::UOptionsMinusGraphics_C_UpdateMaxFramerate_Params Parms{};

	Parms.FrameRate = FrameRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateCurrentValuesInUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::UpdateCurrentValuesInUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateCurrentValuesInUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.OnPresetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnPresetChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnPresetChanged");

	Params::UOptionsMinusGraphics_C_OnPresetChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdatePreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetLabel                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::UpdatePreset(class FText PresetLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdatePreset");

	Params::UOptionsMinusGraphics_C_UpdatePreset_Params Parms{};

	Parms.PresetLabel = PresetLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnRenderQualityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnRenderQualityChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnRenderQualityChanged");

	Params::UOptionsMinusGraphics_C_OnRenderQualityChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateScalabilityLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScalabilityLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateScalabilityLevel(int32 ScalabilityLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateScalabilityLevel");

	Params::UOptionsMinusGraphics_C_UpdateScalabilityLevel_Params Parms{};

	Parms.ScalabilityLevel = ScalabilityLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnVirtualShadowsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnVirtualShadowsChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnVirtualShadowsChanged");

	Params::UOptionsMinusGraphics_C_OnVirtualShadowsChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateVirtualShadows
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::UpdateVirtualShadows()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateVirtualShadows");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.OnVSyncChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnVSyncChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnVSyncChanged");

	Params::UOptionsMinusGraphics_C_OnVSyncChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateVSync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateVSync(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateVSync");

	Params::UOptionsMinusGraphics_C_UpdateVSync_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnFPSDisplayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnFPSDisplayChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnFPSDisplayChanged");

	Params::UOptionsMinusGraphics_C_OnFPSDisplayChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnScreenModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnScreenModeChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnScreenModeChanged");

	Params::UOptionsMinusGraphics_C_OnScreenModeChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateFPSDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateFPSDisplay(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateFPSDisplay");

	Params::UOptionsMinusGraphics_C_UpdateFPSDisplay_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.BndEvt__Options-Graphics_Defaults_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::BndEvt__OptionsMinusGraphics_Defaults_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "BndEvt__Options-Graphics_Defaults_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.BndEvt__Options-Graphics_ApplySettings_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::BndEvt__OptionsMinusGraphics_ApplySettings_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "BndEvt__Options-Graphics_ApplySettings_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.UpdatePresetUIValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGraphicsPreset             Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              PresetID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdatePresetUIValues(const struct FGraphicsPreset& Preset, int32 PresetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdatePresetUIValues");

	Params::UOptionsMinusGraphics_C_UpdatePresetUIValues_Params Parms{};

	Parms.Preset = Preset;
	Parms.PresetID = PresetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateScreenMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateScreenMode(enum class EWindowMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateScreenMode");

	Params::UOptionsMinusGraphics_C_UpdateScreenMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.BndEvt__Options-Graphics_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::BndEvt__OptionsMinusGraphics_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "BndEvt__Options-Graphics_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.UpdateScreenResolution
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   Resolution                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateScreenResolution(const struct FIntPoint& Resolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateScreenResolution");

	Params::UOptionsMinusGraphics_C_UpdateScreenResolution_Params Parms{};

	Parms.Resolution = Resolution;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.OnClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Options-Graphics.Options-Graphics_C.OnScreenResolutionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::OnScreenResolutionChanged(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnScreenResolutionChanged");

	Params::UOptionsMinusGraphics_C_OnScreenResolutionChanged_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.UpdateResolutionChangeInteractibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             CurrentMode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::UpdateResolutionChangeInteractibility(enum class EWindowMode CurrentMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "UpdateResolutionChangeInteractibility");

	Params::UOptionsMinusGraphics_C_UpdateResolutionChangeInteractibility_Params Parms{};

	Parms.CurrentMode = CurrentMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.BndEvt__Options-Graphics_RenderQuality_K2Node_ComponentBoundEvent_2_OnItemChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::BndEvt__OptionsMinusGraphics_RenderQuality_K2Node_ComponentBoundEvent_2_OnItemChanged__DelegateSignature(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "BndEvt__Options-Graphics_RenderQuality_K2Node_ComponentBoundEvent_2_OnItemChanged__DelegateSignature");

	Params::UOptionsMinusGraphics_C_BndEvt__OptionsMinusGraphics_RenderQuality_K2Node_ComponentBoundEvent_2_OnItemChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.BndEvt__Options-Graphics_ResolutionMode_K2Node_ComponentBoundEvent_4_OnItemChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::BndEvt__OptionsMinusGraphics_ResolutionMode_K2Node_ComponentBoundEvent_4_OnItemChanged__DelegateSignature(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "BndEvt__Options-Graphics_ResolutionMode_K2Node_ComponentBoundEvent_4_OnItemChanged__DelegateSignature");

	Params::UOptionsMinusGraphics_C_BndEvt__OptionsMinusGraphics_ResolutionMode_K2Node_ComponentBoundEvent_4_OnItemChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.BndEvt__Options-Graphics_ScreenResolution_K2Node_ComponentBoundEvent_5_OnItemChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMinusGraphics_C::BndEvt__OptionsMinusGraphics_ScreenResolution_K2Node_ComponentBoundEvent_5_OnItemChanged__DelegateSignature(int32 Index, class FText Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "BndEvt__Options-Graphics_ScreenResolution_K2Node_ComponentBoundEvent_5_OnItemChanged__DelegateSignature");

	Params::UOptionsMinusGraphics_C_BndEvt__OptionsMinusGraphics_ScreenResolution_K2Node_ComponentBoundEvent_5_OnItemChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.ExecuteUbergraph_Options-Graphics
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Label                                 (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_7                                       (None)
// double                             K2Node_CustomEvent_Framerate                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_6                                       (None)
// class FText                        K2Node_CustomEvent_PresetLabel                                   (None)
// int32                              K2Node_CustomEvent_Index_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_5                                       (None)
// int32                              K2Node_CustomEvent_ScalabilityLevel                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_4                                       (None)
// int32                              K2Node_CustomEvent_Index_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_3                                       (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsOn_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_2                                       (None)
// int32                              K2Node_CustomEvent_Index_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label_1                                       (None)
// bool                               K2Node_CustomEvent_IsOn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGraphicsPreset             K2Node_CustomEvent_Preset                                        (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PresetID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             K2Node_CustomEvent_Mode                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_CustomEvent_Resolution                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Label                                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             K2Node_CustomEvent_CurrentMode                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Label_2                               (None)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Label_1                               (None)
// float                              CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMinusGraphics_C::ExecuteUbergraph_OptionsMinusGraphics(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index, class FText K2Node_ComponentBoundEvent_Label, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 K2Node_CustomEvent_Index_7, class FText K2Node_CustomEvent_Label_7, double K2Node_CustomEvent_Framerate, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, int32 K2Node_CustomEvent_Index_6, class FText K2Node_CustomEvent_Label_6, class FText K2Node_CustomEvent_PresetLabel, int32 K2Node_CustomEvent_Index_5, class FText K2Node_CustomEvent_Label_5, int32 K2Node_CustomEvent_ScalabilityLevel, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool Temp_bool_Variable_2, enum class EWindowMode Temp_byte_Variable, int32 K2Node_CustomEvent_Index_4, class FText K2Node_CustomEvent_Label_4, int32 K2Node_CustomEvent_Index_3, class FText K2Node_CustomEvent_Label_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, bool K2Node_CustomEvent_IsOn_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_Index_2, class FText K2Node_CustomEvent_Label_2, int32 K2Node_CustomEvent_Index_1, class FText K2Node_CustomEvent_Label_1, bool K2Node_CustomEvent_IsOn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SaveGameToSlot_ReturnValue, enum class EWindowMode Temp_byte_Variable_1, enum class EWindowMode Temp_byte_Variable_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, enum class EWindowMode Temp_byte_Variable_3, const struct FGraphicsPreset& K2Node_CustomEvent_Preset, int32 K2Node_CustomEvent_PresetID, enum class EWindowMode K2Node_CustomEvent_Mode, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EWindowMode K2Node_Select_Default, const struct FIntPoint& K2Node_CustomEvent_Resolution, bool Temp_bool_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_4, int32 Temp_int_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Select_Default_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool K2Node_Select_Default_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, int32 K2Node_CustomEvent_Index, class FText K2Node_CustomEvent_Label, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, enum class EWindowMode K2Node_CustomEvent_CurrentMode, int32 CallFunc_Conv_StringToInt_ReturnValue, bool K2Node_Select_Default_3, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, int32 K2Node_ComponentBoundEvent_Index_2, class FText K2Node_ComponentBoundEvent_Label_2, int32 K2Node_ComponentBoundEvent_Index_1, class FText K2Node_ComponentBoundEvent_Label_1, float CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "ExecuteUbergraph_Options-Graphics");

	Params::UOptionsMinusGraphics_C_ExecuteUbergraph_OptionsMinusGraphics_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Label = K2Node_ComponentBoundEvent_Label;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_CustomEvent_Index_7 = K2Node_CustomEvent_Index_7;
	Parms.K2Node_CustomEvent_Label_7 = K2Node_CustomEvent_Label_7;
	Parms.K2Node_CustomEvent_Framerate = K2Node_CustomEvent_Framerate;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.K2Node_CustomEvent_Index_6 = K2Node_CustomEvent_Index_6;
	Parms.K2Node_CustomEvent_Label_6 = K2Node_CustomEvent_Label_6;
	Parms.K2Node_CustomEvent_PresetLabel = K2Node_CustomEvent_PresetLabel;
	Parms.K2Node_CustomEvent_Index_5 = K2Node_CustomEvent_Index_5;
	Parms.K2Node_CustomEvent_Label_5 = K2Node_CustomEvent_Label_5;
	Parms.K2Node_CustomEvent_ScalabilityLevel = K2Node_CustomEvent_ScalabilityLevel;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_Index_4 = K2Node_CustomEvent_Index_4;
	Parms.K2Node_CustomEvent_Label_4 = K2Node_CustomEvent_Label_4;
	Parms.K2Node_CustomEvent_Index_3 = K2Node_CustomEvent_Index_3;
	Parms.K2Node_CustomEvent_Label_3 = K2Node_CustomEvent_Label_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.K2Node_CustomEvent_IsOn_1 = K2Node_CustomEvent_IsOn_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Index_2 = K2Node_CustomEvent_Index_2;
	Parms.K2Node_CustomEvent_Label_2 = K2Node_CustomEvent_Label_2;
	Parms.K2Node_CustomEvent_Index_1 = K2Node_CustomEvent_Index_1;
	Parms.K2Node_CustomEvent_Label_1 = K2Node_CustomEvent_Label_1;
	Parms.K2Node_CustomEvent_IsOn = K2Node_CustomEvent_IsOn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_Preset = K2Node_CustomEvent_Preset;
	Parms.K2Node_CustomEvent_PresetID = K2Node_CustomEvent_PresetID;
	Parms.K2Node_CustomEvent_Mode = K2Node_CustomEvent_Mode;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Resolution = K2Node_CustomEvent_Resolution;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Label = K2Node_CustomEvent_Label;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentMode = K2Node_CustomEvent_CurrentMode;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Label_2 = K2Node_ComponentBoundEvent_Label_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Label_1 = K2Node_ComponentBoundEvent_Label_1;
	Parms.CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast = CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Options-Graphics.Options-Graphics_C.OnBackRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMinusGraphics_C::OnBackRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Options-Graphics_C", "OnBackRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


