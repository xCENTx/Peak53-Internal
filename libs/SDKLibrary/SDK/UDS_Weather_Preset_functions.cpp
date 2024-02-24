#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Weather_Preset.UDS_Weather_Preset_C
// (None)

class UClass* UUDS_Weather_Preset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Weather_Preset_C");

	return Clss;
}


// UDS_Weather_Preset_C UDS_Weather_Preset.Default__UDS_Weather_Preset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUDS_Weather_Preset_C* UUDS_Weather_Preset_C::GetDefaultObj()
{
	static class UUDS_Weather_Preset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUDS_Weather_Preset_C*>(UUDS_Weather_Preset_C::StaticClass()->DefaultObject);

	return Default;
}

}


