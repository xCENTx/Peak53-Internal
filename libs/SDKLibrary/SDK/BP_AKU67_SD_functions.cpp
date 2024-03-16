#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AKU67_SD.BP_AKU67_SD_C
// (Actor)

class UClass* ABP_AKU67_SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AKU67_SD_C");

	return Clss;
}


// BP_AKU67_SD_C BP_AKU67_SD.Default__BP_AKU67_SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AKU67_SD_C* ABP_AKU67_SD_C::GetDefaultObj()
{
	static class ABP_AKU67_SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AKU67_SD_C*>(ABP_AKU67_SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


