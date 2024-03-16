#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PMM_Instance.PMM_Instance_C
// (None)

class UClass* UPMM_Instance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PMM_Instance_C");

	return Clss;
}


// PMM_Instance_C PMM_Instance.Default__PMM_Instance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPMM_Instance_C* UPMM_Instance_C::GetDefaultObj()
{
	static class UPMM_Instance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPMM_Instance_C*>(UPMM_Instance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PMM_Instance.PMM_Instance_C.GetDefaultAxisActionMappingNames
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                AxisNames                                                        (Parm, OutParm)
// TArray<class FName>                ActionNames                                                      (Parm, OutParm)
// TArray<class FName>                OutActionNames                                                   (Edit, BlueprintVisible)
// TArray<class FName>                OutAxisNames                                                     (Edit, BlueprintVisible)
// TSet<class FName>                  InDefaultMappingNames                                            (Edit, BlueprintVisible)
// TSet<class FName>                  InActionNames                                                    (Edit, BlueprintVisible)
// TSet<class FName>                  InAxisNames                                                      (Edit, BlueprintVisible)
// TSet<class FName>                  CallFunc_Set_Intersection_Result                                 (None)
// TArray<class FName>                CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// TSet<class FName>                  CallFunc_Set_Intersection_Result_1                               (None)
// TArray<class FName>                CallFunc_Set_ToArray_Result_1                                    (ReferenceParm)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetActionNames_ActionNames                              (ReferenceParm)
// TArray<class FName>                CallFunc_GetDefaultInputMappingNames_Keys                        (ReferenceParm)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAxisNames_AxisNames                                  (ReferenceParm)

void UPMM_Instance_C::GetDefaultAxisActionMappingNames(TArray<class FName>* AxisNames, TArray<class FName>* ActionNames, const TArray<class FName>& OutActionNames, const TArray<class FName>& OutAxisNames, TSet<class FName> InDefaultMappingNames, TSet<class FName> InActionNames, TSet<class FName> InAxisNames, TSet<class FName> CallFunc_Set_Intersection_Result, TArray<class FName>& CallFunc_Set_ToArray_Result, TSet<class FName> CallFunc_Set_Intersection_Result_1, TArray<class FName>& CallFunc_Set_ToArray_Result_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<class FName>& CallFunc_GetActionNames_ActionNames, TArray<class FName>& CallFunc_GetDefaultInputMappingNames_Keys, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<class FName>& CallFunc_GetAxisNames_AxisNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "GetDefaultAxisActionMappingNames");

	Params::UPMM_Instance_C_GetDefaultAxisActionMappingNames_Params Parms{};

	Parms.OutActionNames = OutActionNames;
	Parms.OutAxisNames = OutAxisNames;
	Parms.InDefaultMappingNames = InDefaultMappingNames;
	Parms.InActionNames = InActionNames;
	Parms.InAxisNames = InAxisNames;
	Parms.CallFunc_Set_Intersection_Result = CallFunc_Set_Intersection_Result;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Set_Intersection_Result_1 = CallFunc_Set_Intersection_Result_1;
	Parms.CallFunc_Set_ToArray_Result_1 = CallFunc_Set_ToArray_Result_1;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetActionNames_ActionNames = CallFunc_GetActionNames_ActionNames;
	Parms.CallFunc_GetDefaultInputMappingNames_Keys = CallFunc_GetDefaultInputMappingNames_Keys;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetAxisNames_AxisNames = CallFunc_GetAxisNames_AxisNames;

	UObject::ProcessEvent(Func, &Parms);

	if (AxisNames != nullptr)
		*AxisNames = std::move(Parms.AxisNames);

	if (ActionNames != nullptr)
		*ActionNames = std::move(Parms.ActionNames);

}


// Function PMM_Instance.PMM_Instance_C.FindDefaultAxisMappingNames
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Result                                                           (Parm, OutParm)
// TSet<class FName>                  AxisNames_Set                                                    (Edit, BlueprintVisible)
// TSet<class FName>                  DefaultMappings_Set                                              (Edit, BlueprintVisible)
// TSet<class FName>                  CallFunc_Set_Intersection_Result                                 (None)
// TArray<class FName>                CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// TArray<class FName>                CallFunc_GetDefaultInputMappingNames_Keys                        (ReferenceParm)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAxisNames_AxisNames                                  (ReferenceParm)

void UPMM_Instance_C::FindDefaultAxisMappingNames(TArray<class FName>* Result, TSet<class FName> AxisNames_Set, TSet<class FName> DefaultMappings_Set, TSet<class FName> CallFunc_Set_Intersection_Result, TArray<class FName>& CallFunc_Set_ToArray_Result, TArray<class FName>& CallFunc_GetDefaultInputMappingNames_Keys, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<class FName>& CallFunc_GetAxisNames_AxisNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "FindDefaultAxisMappingNames");

	Params::UPMM_Instance_C_FindDefaultAxisMappingNames_Params Parms{};

	Parms.AxisNames_Set = AxisNames_Set;
	Parms.DefaultMappings_Set = DefaultMappings_Set;
	Parms.CallFunc_Set_Intersection_Result = CallFunc_Set_Intersection_Result;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_GetDefaultInputMappingNames_Keys = CallFunc_GetDefaultInputMappingNames_Keys;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetAxisNames_AxisNames = CallFunc_GetAxisNames_AxisNames;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function PMM_Instance.PMM_Instance_C.GetDefaultInputMappingNames
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                Keys                                                             (Parm, OutParm)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)

void UPMM_Instance_C::GetDefaultInputMappingNames(TArray<class FName>* Keys, TArray<class FName>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "GetDefaultInputMappingNames");

	Params::UPMM_Instance_C_GetDefaultInputMappingNames_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

	if (Keys != nullptr)
		*Keys = std::move(Parms.Keys);

}


// Function PMM_Instance.PMM_Instance_C.RemoveLoadingWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::RemoveLoadingWidget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "RemoveLoadingWidget");

	Params::UPMM_Instance_C_RemoveLoadingWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.CreateLoadingWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ZOrder                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Loading_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::CreateLoadingWidget(int32 ZOrder, class UWB_Loading_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "CreateLoadingWidget");

	Params::UPMM_Instance_C_CreateLoadingWidget_Params Parms{};

	Parms.ZOrder = ZOrder;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ETravelFailure          FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::HandleTravelError(enum class ETravelFailure FailureType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "HandleTravelError");

	Params::UPMM_Instance_C_HandleTravelError_Params Parms{};

	Parms.FailureType = FailureType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "HandleNetworkError");

	Params::UPMM_Instance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.ApplySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ApplySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithApply                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::SaveSettings(bool ContinueWithApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "SaveSettings");

	Params::UPMM_Instance_C_SaveSettings_Params Parms{};

	Parms.ContinueWithApply = ContinueWithApply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.LoadSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithApply                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::LoadSettings(bool ContinueWithApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "LoadSettings");

	Params::UPMM_Instance_C_LoadSettings_Params Parms{};

	Parms.ContinueWithApply = ContinueWithApply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.ResetDefaults_GeneralSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::ResetDefaults_GeneralSettings(bool ContinueWithSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ResetDefaults_GeneralSettings");

	Params::UPMM_Instance_C_ResetDefaults_GeneralSettings_Params Parms{};

	Parms.ContinueWithSave = ContinueWithSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.SetDefaultSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::SetDefaultSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "SetDefaultSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.ResetDefaults_ControlSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::ResetDefaults_ControlSettings(bool ContinueWithSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ResetDefaults_ControlSettings");

	Params::UPMM_Instance_C_ResetDefaults_ControlSettings_Params Parms{};

	Parms.ContinueWithSave = ContinueWithSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.ResetDefaults_AudioSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::ResetDefaults_AudioSettings(bool ContinueWithSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ResetDefaults_AudioSettings");

	Params::UPMM_Instance_C_ResetDefaults_AudioSettings_Params Parms{};

	Parms.ContinueWithSave = ContinueWithSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.ResetDefaults_VideoSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::ResetDefaults_VideoSettings(bool ContinueWithSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ResetDefaults_VideoSettings");

	Params::UPMM_Instance_C_ResetDefaults_VideoSettings_Params Parms{};

	Parms.ContinueWithSave = ContinueWithSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.ResetDefaults_InputSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ContinueWithSave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::ResetDefaults_InputSettings(bool ContinueWithSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ResetDefaults_InputSettings");

	Params::UPMM_Instance_C_ResetDefaults_InputSettings_Params Parms{};

	Parms.ContinueWithSave = ContinueWithSave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.OnGlobalGameSettingsSaved_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnGlobalGameSettingsSaved_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnGlobalGameSettingsSaved_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.CacheLastConfirmedVideoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::CacheLastConfirmedVideoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "CacheLastConfirmedVideoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::CustomEvent_0(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "CustomEvent_0");

	Params::UPMM_Instance_C_CustomEvent_0_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::CustomEvent(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "CustomEvent");

	Params::UPMM_Instance_C_CustomEvent_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.OnResetDefaultsCompleted_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnResetDefaultsCompleted_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnResetDefaultsCompleted_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnGlobalGameSettingsLoaded_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnGlobalGameSettingsLoaded_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnGlobalGameSettingsLoaded_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnVideoSettingsReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnVideoSettingsReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnVideoSettingsReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnAudioSettingsReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnAudioSettingsReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnAudioSettingsReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnControlSettingsReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnControlSettingsReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnControlSettingsReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnGeneralSettingsReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnGeneralSettingsReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnGeneralSettingsReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.ExecuteUbergraph_PMM_Instance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// enum class ENetworkFailure         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PMM_DoesSaveGameExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_8                                             (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_9                                             (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_10                                            (None)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_11                                            (None)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class UBP_PMM_Savegame_C*          CallFunc_PMM_LoadGame_AsBP_PMM_Savegame                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// enum class ETravelFailure          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETravelFailure          K2Node_Event_FailureType_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetworkFailure         K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithApply_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithApply                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithSave_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PMM_SaveGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithSave_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithSave_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithSave_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PMM_Savegame_C*          CallFunc_PMM_GetSaveGameObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ContinueWithSave                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetLastConfirmedFullscreenMode_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetLastConfirmedScreenResolution_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UWB_Request_C*               CallFunc_CreateRequest_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        Temp_text_Variable_17                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_18                                            (None)
// bool                               CallFunc_PMM_DoesSaveGameExist_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_19                                            (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_FindDefaultAxisMappingNames_Result                      (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAxisNames_AxisNames                                  (ReferenceParm)
// class FText                        Temp_text_Variable_20                                            (None)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings_1                      (ReferenceParm)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_4                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_5                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_6                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetActionNames_ActionNames                              (ReferenceParm)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_Map_Find_Value_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_4                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PMM_DoesSaveGameExist_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_21                                            (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_7                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_22                                            (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_8                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDefaultAxisActionMappingNames_AxisNames              (ReferenceParm)
// TArray<class FName>                CallFunc_GetDefaultAxisActionMappingNames_ActionNames            (ReferenceParm)
// class FText                        K2Node_Select_Default_3                                          (None)
// class FName                        CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_1                    (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UWB_Request_C*               CallFunc_CreateRequest_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings_2                      (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_14                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_15                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_16                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_17                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_18                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_19                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_20                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_21                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_22                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_23                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_24                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_25                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_26                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_27                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_28                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_29                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_30                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Scale_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_31                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_7          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_32                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPMM_Instance_C::ExecuteUbergraph_PMM_Instance(int32 EntryPoint, class FText Temp_text_Variable, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, enum class ENetworkFailure Temp_byte_Variable, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_PMM_DoesSaveGameExist_ReturnValue, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_8, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable_9, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class FText Temp_text_Variable_10, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, class FText Temp_text_Variable_11, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class UBP_PMM_Savegame_C* CallFunc_PMM_LoadGame_AsBP_PMM_Savegame, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, enum class ETravelFailure Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ETravelFailure K2Node_Event_FailureType_1, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_CustomEvent_ContinueWithApply_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_ContinueWithApply, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_ContinueWithSave_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_PMM_SaveGame_ReturnValue, bool K2Node_CustomEvent_ContinueWithSave_3, bool K2Node_CustomEvent_ContinueWithSave_2, bool K2Node_CustomEvent_ContinueWithSave_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UBP_PMM_Savegame_C* CallFunc_PMM_GetSaveGameObject_ReturnValue, bool K2Node_CustomEvent_ContinueWithSave, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class EWindowMode CallFunc_GetLastConfirmedFullscreenMode_ReturnValue, const struct FIntPoint& CallFunc_GetLastConfirmedScreenResolution_ReturnValue, bool K2Node_CustomEvent_Confirmed_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue, bool K2Node_CustomEvent_Confirmed, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText Temp_text_Variable_17, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText Temp_text_Variable_18, bool CallFunc_PMM_DoesSaveGameExist_ReturnValue_1, class FText Temp_text_Variable_19, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<class FName>& CallFunc_FindDefaultAxisMappingNames_Result, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, TArray<class FName>& CallFunc_GetAxisNames_AxisNames, class FText Temp_text_Variable_20, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FKey& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_1, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, TArray<class FName>& CallFunc_GetActionNames_ActionNames, bool Temp_bool_Variable_1, TArray<class FName>& CallFunc_Map_Keys_Keys_1, class FName CallFunc_Array_Get_Item_3, double K2Node_Select_Default_2, const struct FKey& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_PMM_DoesSaveGameExist_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, class FText Temp_text_Variable_21, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, class FText Temp_text_Variable_22, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_8, TArray<class FName>& CallFunc_GetDefaultAxisActionMappingNames_AxisNames, TArray<class FName>& CallFunc_GetDefaultAxisActionMappingNames_ActionNames, class FText K2Node_Select_Default_3, class FName CallFunc_Array_Get_Item_5, class FText CallFunc_MakeLiteralText_ReturnValue_3, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, class FName CallFunc_Array_Get_Item_6, bool CallFunc_Less_IntInt_ReturnValue_5, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2, float CallFunc_Delay_Duration_ImplicitCast_3, float CallFunc_Delay_Duration_ImplicitCast_4, float CallFunc_Delay_Duration_ImplicitCast_5, float CallFunc_Delay_Duration_ImplicitCast_6, float CallFunc_Delay_Duration_ImplicitCast_7, float CallFunc_Delay_Duration_ImplicitCast_8, float CallFunc_Delay_Duration_ImplicitCast_9, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2, float CallFunc_Delay_Duration_ImplicitCast_10, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3, float CallFunc_Delay_Duration_ImplicitCast_11, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_5, float CallFunc_Delay_Duration_ImplicitCast_12, float CallFunc_Delay_Duration_ImplicitCast_13, float CallFunc_Delay_Duration_ImplicitCast_14, float CallFunc_Delay_Duration_ImplicitCast_15, float CallFunc_Delay_Duration_ImplicitCast_16, float CallFunc_Delay_Duration_ImplicitCast_17, float CallFunc_Delay_Duration_ImplicitCast_18, float CallFunc_Delay_Duration_ImplicitCast_19, float CallFunc_Delay_Duration_ImplicitCast_20, float CallFunc_Delay_Duration_ImplicitCast_21, float CallFunc_Delay_Duration_ImplicitCast_22, float CallFunc_Delay_Duration_ImplicitCast_23, float CallFunc_Delay_Duration_ImplicitCast_24, float CallFunc_Delay_Duration_ImplicitCast_25, float CallFunc_Delay_Duration_ImplicitCast_26, float CallFunc_Delay_Duration_ImplicitCast_27, float CallFunc_Delay_Duration_ImplicitCast_28, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_6, float CallFunc_Delay_Duration_ImplicitCast_29, float CallFunc_Delay_Duration_ImplicitCast_30, double CallFunc_Map_Add_Value_ImplicitCast, float K2Node_MakeStruct_Scale_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_31, float CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_7, float CallFunc_Delay_Duration_ImplicitCast_32)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "ExecuteUbergraph_PMM_Instance");

	Params::UPMM_Instance_C_ExecuteUbergraph_PMM_Instance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue = CallFunc_SetCurrentLanguageAndLocale_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PMM_DoesSaveGameExist_ReturnValue = CallFunc_PMM_DoesSaveGameExist_ReturnValue;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.CallFunc_PMM_LoadGame_AsBP_PMM_Savegame = CallFunc_PMM_LoadGame_AsBP_PMM_Savegame;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_FailureType_1 = K2Node_Event_FailureType_1;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_ContinueWithApply_1 = K2Node_CustomEvent_ContinueWithApply_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_ContinueWithApply = K2Node_CustomEvent_ContinueWithApply;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_ContinueWithSave_4 = K2Node_CustomEvent_ContinueWithSave_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_PMM_SaveGame_ReturnValue = CallFunc_PMM_SaveGame_ReturnValue;
	Parms.K2Node_CustomEvent_ContinueWithSave_3 = K2Node_CustomEvent_ContinueWithSave_3;
	Parms.K2Node_CustomEvent_ContinueWithSave_2 = K2Node_CustomEvent_ContinueWithSave_2;
	Parms.K2Node_CustomEvent_ContinueWithSave_1 = K2Node_CustomEvent_ContinueWithSave_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_PMM_GetSaveGameObject_ReturnValue = CallFunc_PMM_GetSaveGameObject_ReturnValue;
	Parms.K2Node_CustomEvent_ContinueWithSave = K2Node_CustomEvent_ContinueWithSave;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetLastConfirmedFullscreenMode_ReturnValue = CallFunc_GetLastConfirmedFullscreenMode_ReturnValue;
	Parms.CallFunc_GetLastConfirmedScreenResolution_ReturnValue = CallFunc_GetLastConfirmedScreenResolution_ReturnValue;
	Parms.K2Node_CustomEvent_Confirmed_1 = K2Node_CustomEvent_Confirmed_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_CreateRequest_ReturnValue = CallFunc_CreateRequest_ReturnValue;
	Parms.K2Node_CustomEvent_Confirmed = K2Node_CustomEvent_Confirmed;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.CallFunc_PMM_DoesSaveGameExist_ReturnValue_1 = CallFunc_PMM_DoesSaveGameExist_ReturnValue_1;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_FindDefaultAxisMappingNames_Result = CallFunc_FindDefaultAxisMappingNames_Result;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.CallFunc_GetAxisNames_AxisNames = CallFunc_GetAxisNames_AxisNames;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_GetAxisMappingByName_OutMappings_1 = CallFunc_GetAxisMappingByName_OutMappings_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_4 = CallFunc_GetInputSettings_ReturnValue_4;
	Parms.CallFunc_GetInputSettings_ReturnValue_5 = CallFunc_GetInputSettings_ReturnValue_5;
	Parms.CallFunc_GetInputSettings_ReturnValue_6 = CallFunc_GetInputSettings_ReturnValue_6;
	Parms.CallFunc_GetActionNames_ActionNames = CallFunc_GetActionNames_ActionNames;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_PMM_DoesSaveGameExist_ReturnValue_2 = CallFunc_PMM_DoesSaveGameExist_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.CallFunc_GetInputSettings_ReturnValue_7 = CallFunc_GetInputSettings_ReturnValue_7;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.CallFunc_GetInputSettings_ReturnValue_8 = CallFunc_GetInputSettings_ReturnValue_8;
	Parms.CallFunc_GetDefaultAxisActionMappingNames_AxisNames = CallFunc_GetDefaultAxisActionMappingNames_AxisNames;
	Parms.CallFunc_GetDefaultAxisActionMappingNames_ActionNames = CallFunc_GetDefaultAxisActionMappingNames_ActionNames;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_GetActionMappingByName_OutMappings_1 = CallFunc_GetActionMappingByName_OutMappings_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_CreateRequest_ReturnValue_1 = CallFunc_CreateRequest_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetAxisMappingByName_OutMappings_2 = CallFunc_GetAxisMappingByName_OutMappings_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;
	Parms.CallFunc_Delay_Duration_ImplicitCast_3 = CallFunc_Delay_Duration_ImplicitCast_3;
	Parms.CallFunc_Delay_Duration_ImplicitCast_4 = CallFunc_Delay_Duration_ImplicitCast_4;
	Parms.CallFunc_Delay_Duration_ImplicitCast_5 = CallFunc_Delay_Duration_ImplicitCast_5;
	Parms.CallFunc_Delay_Duration_ImplicitCast_6 = CallFunc_Delay_Duration_ImplicitCast_6;
	Parms.CallFunc_Delay_Duration_ImplicitCast_7 = CallFunc_Delay_Duration_ImplicitCast_7;
	Parms.CallFunc_Delay_Duration_ImplicitCast_8 = CallFunc_Delay_Duration_ImplicitCast_8;
	Parms.CallFunc_Delay_Duration_ImplicitCast_9 = CallFunc_Delay_Duration_ImplicitCast_9;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2;
	Parms.CallFunc_Delay_Duration_ImplicitCast_10 = CallFunc_Delay_Duration_ImplicitCast_10;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3;
	Parms.CallFunc_Delay_Duration_ImplicitCast_11 = CallFunc_Delay_Duration_ImplicitCast_11;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_5 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_5;
	Parms.CallFunc_Delay_Duration_ImplicitCast_12 = CallFunc_Delay_Duration_ImplicitCast_12;
	Parms.CallFunc_Delay_Duration_ImplicitCast_13 = CallFunc_Delay_Duration_ImplicitCast_13;
	Parms.CallFunc_Delay_Duration_ImplicitCast_14 = CallFunc_Delay_Duration_ImplicitCast_14;
	Parms.CallFunc_Delay_Duration_ImplicitCast_15 = CallFunc_Delay_Duration_ImplicitCast_15;
	Parms.CallFunc_Delay_Duration_ImplicitCast_16 = CallFunc_Delay_Duration_ImplicitCast_16;
	Parms.CallFunc_Delay_Duration_ImplicitCast_17 = CallFunc_Delay_Duration_ImplicitCast_17;
	Parms.CallFunc_Delay_Duration_ImplicitCast_18 = CallFunc_Delay_Duration_ImplicitCast_18;
	Parms.CallFunc_Delay_Duration_ImplicitCast_19 = CallFunc_Delay_Duration_ImplicitCast_19;
	Parms.CallFunc_Delay_Duration_ImplicitCast_20 = CallFunc_Delay_Duration_ImplicitCast_20;
	Parms.CallFunc_Delay_Duration_ImplicitCast_21 = CallFunc_Delay_Duration_ImplicitCast_21;
	Parms.CallFunc_Delay_Duration_ImplicitCast_22 = CallFunc_Delay_Duration_ImplicitCast_22;
	Parms.CallFunc_Delay_Duration_ImplicitCast_23 = CallFunc_Delay_Duration_ImplicitCast_23;
	Parms.CallFunc_Delay_Duration_ImplicitCast_24 = CallFunc_Delay_Duration_ImplicitCast_24;
	Parms.CallFunc_Delay_Duration_ImplicitCast_25 = CallFunc_Delay_Duration_ImplicitCast_25;
	Parms.CallFunc_Delay_Duration_ImplicitCast_26 = CallFunc_Delay_Duration_ImplicitCast_26;
	Parms.CallFunc_Delay_Duration_ImplicitCast_27 = CallFunc_Delay_Duration_ImplicitCast_27;
	Parms.CallFunc_Delay_Duration_ImplicitCast_28 = CallFunc_Delay_Duration_ImplicitCast_28;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_6 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_6;
	Parms.CallFunc_Delay_Duration_ImplicitCast_29 = CallFunc_Delay_Duration_ImplicitCast_29;
	Parms.CallFunc_Delay_Duration_ImplicitCast_30 = CallFunc_Delay_Duration_ImplicitCast_30;
	Parms.CallFunc_Map_Add_Value_ImplicitCast = CallFunc_Map_Add_Value_ImplicitCast;
	Parms.K2Node_MakeStruct_Scale_ImplicitCast = K2Node_MakeStruct_Scale_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_31 = CallFunc_Delay_Duration_ImplicitCast_31;
	Parms.CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_7 = CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_7;
	Parms.CallFunc_Delay_Duration_ImplicitCast_32 = CallFunc_Delay_Duration_ImplicitCast_32;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PMM_Instance.PMM_Instance_C.OnResetDefaults_InputSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnResetDefaults_InputSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnResetDefaults_InputSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnSetDefaultsCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnSetDefaultsCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnSetDefaultsCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnResetDefaults_VideoSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnResetDefaults_VideoSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnResetDefaults_VideoSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnResetDefaults_AudioSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnResetDefaults_AudioSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnResetDefaults_AudioSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnResetDefaults_ControlSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnResetDefaults_ControlSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnResetDefaults_ControlSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnResetDefaults_GeneralSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnResetDefaults_GeneralSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnResetDefaults_GeneralSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnGlobalGameSettingsLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnGlobalGameSettingsLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnGlobalGameSettingsLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnGlobalGameSettingsSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnGlobalGameSettingsSaved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnGlobalGameSettingsSaved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PMM_Instance.PMM_Instance_C.OnGlobalGameSettingsApplied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPMM_Instance_C::OnGlobalGameSettingsApplied__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PMM_Instance_C", "OnGlobalGameSettingsApplied__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


