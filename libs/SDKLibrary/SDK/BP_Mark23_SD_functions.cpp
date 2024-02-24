#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mark23_SD.BP_Mark23_SD_C
// (Actor)

class UClass* ABP_Mark23_SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mark23_SD_C");

	return Clss;
}


// BP_Mark23_SD_C BP_Mark23_SD.Default__BP_Mark23_SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mark23_SD_C* ABP_Mark23_SD_C::GetDefaultObj()
{
	static class ABP_Mark23_SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mark23_SD_C*>(ABP_Mark23_SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


