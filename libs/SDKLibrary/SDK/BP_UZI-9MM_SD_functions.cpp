#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UZI-9MM_SD.BP_UZI-9MM_SD_C
// (Actor)

class UClass* ABP_UZIMinus9MM_SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UZI-9MM_SD_C");

	return Clss;
}


// BP_UZI-9MM_SD_C BP_UZI-9MM_SD.Default__BP_UZI-9MM_SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_UZIMinus9MM_SD_C* ABP_UZIMinus9MM_SD_C::GetDefaultObj()
{
	static class ABP_UZIMinus9MM_SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_UZIMinus9MM_SD_C*>(ABP_UZIMinus9MM_SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


