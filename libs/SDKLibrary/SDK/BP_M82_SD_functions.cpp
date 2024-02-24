#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M82_SD.BP_M82_SD_C
// (Actor)

class UClass* ABP_M82_SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M82_SD_C");

	return Clss;
}


// BP_M82_SD_C BP_M82_SD.Default__BP_M82_SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M82_SD_C* ABP_M82_SD_C::GetDefaultObj()
{
	static class ABP_M82_SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M82_SD_C*>(ABP_M82_SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


