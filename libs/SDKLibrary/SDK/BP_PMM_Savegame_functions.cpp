#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PMM_Savegame.BP_PMM_Savegame_C
// (None)

class UClass* UBP_PMM_Savegame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PMM_Savegame_C");

	return Clss;
}


// BP_PMM_Savegame_C BP_PMM_Savegame.Default__BP_PMM_Savegame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PMM_Savegame_C* UBP_PMM_Savegame_C::GetDefaultObj()
{
	static class UBP_PMM_Savegame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PMM_Savegame_C*>(UBP_PMM_Savegame_C::StaticClass()->DefaultObject);

	return Default;
}

}


