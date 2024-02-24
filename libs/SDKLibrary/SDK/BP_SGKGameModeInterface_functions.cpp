#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKGameModeInterface.BP_SGKGameModeInterface_C
// (None)

class UClass* IBP_SGKGameModeInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKGameModeInterface_C");

	return Clss;
}


// BP_SGKGameModeInterface_C BP_SGKGameModeInterface.Default__BP_SGKGameModeInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKGameModeInterface_C* IBP_SGKGameModeInterface_C::GetDefaultObj()
{
	static class IBP_SGKGameModeInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKGameModeInterface_C*>(IBP_SGKGameModeInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetInitComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GameModeInitComponent_C* InitComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameModeInterface_C::SGK_GetInitComponent(class UBP_GameModeInitComponent_C** InitComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameModeInterface_C", "SGK GetInitComponent");

	Params::IBP_SGKGameModeInterface_C_SGK_GetInitComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InitComponent != nullptr)
		*InitComponent = Parms.InitComponent;

}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetResourceManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceManager_C*       ResourceManager                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameModeInterface_C::SGK_GetResourceManager(class ABP_ResourceManager_C** ResourceManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameModeInterface_C", "SGK GetResourceManager");

	Params::IBP_SGKGameModeInterface_C_SGK_GetResourceManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ResourceManager != nullptr)
		*ResourceManager = Parms.ResourceManager;

}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*            SaveGame                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameModeInterface_C::SGK_GetSaveGame(class ABP_SaveSystem_C** SaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameModeInterface_C", "SGK GetSaveGame");

	Params::IBP_SGKGameModeInterface_C_SGK_GetSaveGame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SaveGame != nullptr)
		*SaveGame = Parms.SaveGame;

}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SetSaveSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SaveSystem_C*            SaveSystem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameModeInterface_C::SGK_SetSaveSystem(class ABP_SaveSystem_C* SaveSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameModeInterface_C", "SGK SetSaveSystem");

	Params::IBP_SGKGameModeInterface_C_SGK_SetSaveSystem_Params Parms{};

	Parms.SaveSystem = SaveSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_SGKGameModeInterface_C::SGK_SaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameModeInterface_C", "SGK SaveGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SGKGameModeInterface.BP_SGKGameModeInterface_C.SGK GetGlobalInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GlobalInventoryManager_C*GlobalInventory                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_SGKGameModeInterface_C::SGK_GetGlobalInventory(class ABP_GlobalInventoryManager_C** GlobalInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKGameModeInterface_C", "SGK GetGlobalInventory");

	Params::IBP_SGKGameModeInterface_C_SGK_GetGlobalInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlobalInventory != nullptr)
		*GlobalInventory = Parms.GlobalInventory;

}

}


