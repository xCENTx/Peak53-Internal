#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WeaponWidgetBackground.WeaponWidgetBackground_C
// (None)

class UClass* UWeaponWidgetBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponWidgetBackground_C");

	return Clss;
}


// WeaponWidgetBackground_C WeaponWidgetBackground.Default__WeaponWidgetBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponWidgetBackground_C* UWeaponWidgetBackground_C::GetDefaultObj()
{
	static class UWeaponWidgetBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponWidgetBackground_C*>(UWeaponWidgetBackground_C::StaticClass()->DefaultObject);

	return Default;
}

}


