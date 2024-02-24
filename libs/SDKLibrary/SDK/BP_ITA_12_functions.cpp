#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ITA_12.BP_ITA_12_C
// (Actor)

class UClass* ABP_ITA_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ITA_12_C");

	return Clss;
}


// BP_ITA_12_C BP_ITA_12.Default__BP_ITA_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ITA_12_C* ABP_ITA_12_C::GetDefaultObj()
{
	static class ABP_ITA_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ITA_12_C*>(ABP_ITA_12_C::StaticClass()->DefaultObject);

	return Default;
}

}


