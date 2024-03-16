#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C
// (None)

class UClass* IBP_SGKGameInstanceInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKGameInstanceInterface_C");

	return Clss;
}


// BP_SGKGameInstanceInterface_C BP_SGKGameInstanceInterface.Default__BP_SGKGameInstanceInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKGameInstanceInterface_C* IBP_SGKGameInstanceInterface_C::GetDefaultObj()
{
	static class IBP_SGKGameInstanceInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKGameInstanceInterface_C*>(IBP_SGKGameInstanceInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetAimedSense
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AimedSense                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_SetAimedSense(double AimedSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SetAimedSense");

	Params::IBP_SGKGameInstanceInterface_C_SGK_SetAimedSense_Params Parms{};

	Parms.AimedSense = AimedSense;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK AimedSense
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AimedSense                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_AimedSense(double* AimedSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK AimedSense");

	Params::IBP_SGKGameInstanceInterface_C_SGK_AimedSense_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AimedSense != nullptr)
		*AimedSense = Parms.AimedSense;

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetMouseSense
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MouseSense                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_SetMouseSense(double MouseSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SetMouseSense");

	Params::IBP_SGKGameInstanceInterface_C_SGK_SetMouseSense_Params Parms{};

	Parms.MouseSense = MouseSense;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK MouseSense
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MouseSense                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_MouseSense(double* MouseSense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK MouseSense");

	Params::IBP_SGKGameInstanceInterface_C_SGK_MouseSense_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MouseSense != nullptr)
		*MouseSense = Parms.MouseSense;

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_SoundVolumes          Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_SetVolume(enum class E_SoundVolumes Sound, double Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SetVolume");

	Params::IBP_SGKGameInstanceInterface_C_SGK_SetVolume_Params Parms{};

	Parms.Sound = Sound;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK Options Save
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C*   Settings                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_Options_Save(class UBP_SGKSettingsSaveData_C** Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK Options Save");

	Params::IBP_SGKGameInstanceInterface_C_SGK_Options_Save_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Settings != nullptr)
		*Settings = Parms.Settings;

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKGameInstanceInterface_C::SGK_SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SaveSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetMenuOpenedLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuOpenedLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_GetMenuOpenedLevel(bool* MenuOpenedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK GetMenuOpenedLevel");

	Params::IBP_SGKGameInstanceInterface_C_SGK_GetMenuOpenedLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MenuOpenedLevel != nullptr)
		*MenuOpenedLevel = Parms.MenuOpenedLevel;

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetMenuOpenedLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MenuOpenedLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_SetMenuOpenedLevel(bool MenuOpenedLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SetMenuOpenedLevel");

	Params::IBP_SGKGameInstanceInterface_C_SGK_SetMenuOpenedLevel_Params Parms{};

	Parms.MenuOpenedLevel = MenuOpenedLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetLoadSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LoadSaveGame                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_GetLoadSaveGame(bool* LoadSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK GetLoadSaveGame");

	Params::IBP_SGKGameInstanceInterface_C_SGK_GetLoadSaveGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LoadSaveGame != nullptr)
		*LoadSaveGame = Parms.LoadSaveGame;

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetLoadSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LoadSaveGame                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_SetLoadSaveGame(bool LoadSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SetLoadSaveGame");

	Params::IBP_SGKGameInstanceInterface_C_SGK_SetLoadSaveGame_Params Parms{};

	Parms.LoadSaveGame = LoadSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK SetSaveGameSlotName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveGameSlotName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_SetSaveGameSlotName(const class FString& SaveGameSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK SetSaveGameSlotName");

	Params::IBP_SGKGameInstanceInterface_C_SGK_SetSaveGameSlotName_Params Parms{};

	Parms.SaveGameSlotName = SaveGameSlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameInstanceInterface.BP_SGKGameInstanceInterface_C.SGK GetSaveGameSlotName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SaveGameSlotName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBP_SGKGameInstanceInterface_C::SGK_GetSaveGameSlotName(class FString* SaveGameSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameInstanceInterface_C", "SGK GetSaveGameSlotName");

	Params::IBP_SGKGameInstanceInterface_C_SGK_GetSaveGameSlotName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SaveGameSlotName != nullptr)
		*SaveGameSlotName = std::move(Parms.SaveGameSlotName);

}

}


