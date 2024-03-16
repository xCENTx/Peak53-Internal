#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_LoadoutSave.S_LoadoutSave_C
// (None)

class UClass* US_LoadoutSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_LoadoutSave_C");

	return Clss;
}


// S_LoadoutSave_C S_LoadoutSave.Default__S_LoadoutSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class US_LoadoutSave_C* US_LoadoutSave_C::GetDefaultObj()
{
	static class US_LoadoutSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<US_LoadoutSave_C*>(US_LoadoutSave_C::StaticClass()->DefaultObject);

	return Default;
}

}


