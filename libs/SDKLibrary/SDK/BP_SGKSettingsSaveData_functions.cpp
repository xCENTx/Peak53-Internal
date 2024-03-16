#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C
// (None)

class UClass* UBP_SGKSettingsSaveData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKSettingsSaveData_C");

	return Clss;
}


// BP_SGKSettingsSaveData_C BP_SGKSettingsSaveData.Default__BP_SGKSettingsSaveData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SGKSettingsSaveData_C* UBP_SGKSettingsSaveData_C::GetDefaultObj()
{
	static class UBP_SGKSettingsSaveData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SGKSettingsSaveData_C*>(UBP_SGKSettingsSaveData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateGameSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_GameSettings             Game                                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::UpdateGameSettings(const struct FS_GameSettings& Game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSettingsSaveData_C", "UpdateGameSettings");

	Params::UBP_SGKSettingsSaveData_C_UpdateGameSettings_Params Parms{};

	Parms.Game = Game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SaveSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKSettingsSaveData_C::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSettingsSaveData_C", "SaveSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.UpdateAudioSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AudioSave                Audio                                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::UpdateAudioSettings(const struct FS_AudioSave& Audio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSettingsSaveData_C", "UpdateAudioSettings");

	Params::UBP_SGKSettingsSaveData_C_UpdateAudioSettings_Params Parms{};

	Parms.Audio = Audio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.ExecuteUbergraph_BP_SGKSettingsSaveData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GameSettings             K2Node_CustomEvent_Game                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AudioSave                K2Node_CustomEvent_Audio                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::ExecuteUbergraph_BP_SGKSettingsSaveData(int32 EntryPoint, const struct FS_GameSettings& K2Node_CustomEvent_Game, bool CallFunc_SaveGameToSlot_ReturnValue, const struct FS_AudioSave& K2Node_CustomEvent_Audio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSettingsSaveData_C", "ExecuteUbergraph_BP_SGKSettingsSaveData");

	Params::UBP_SGKSettingsSaveData_C_ExecuteUbergraph_BP_SGKSettingsSaveData_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Game = K2Node_CustomEvent_Game;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.K2Node_CustomEvent_Audio = K2Node_CustomEvent_Audio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSettingsSaveData.BP_SGKSettingsSaveData_C.SettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C*   SGKSettings                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSettingsSaveData_C::SettingsChanged__DelegateSignature(class UBP_SGKSettingsSaveData_C* SGKSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSettingsSaveData_C", "SettingsChanged__DelegateSignature");

	Params::UBP_SGKSettingsSaveData_C_SettingsChanged__DelegateSignature_Params Parms{};

	Parms.SGKSettings = SGKSettings;

	UObject::ProcessEvent(Func, &Parms);

}

}


