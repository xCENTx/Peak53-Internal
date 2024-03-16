#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomUserSettings.CustomUserSettings_C
// (None)

class UClass* UCustomUserSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomUserSettings_C");

	return Clss;
}


// CustomUserSettings_C CustomUserSettings.Default__CustomUserSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomUserSettings_C* UCustomUserSettings_C::GetDefaultObj()
{
	static class UCustomUserSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomUserSettings_C*>(UCustomUserSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


