#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_STA.BP_STA_C
// (Actor)

class UClass* ABP_STA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_STA_C");

	return Clss;
}


// BP_STA_C BP_STA.Default__BP_STA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_STA_C* ABP_STA_C::GetDefaultObj()
{
	static class ABP_STA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_STA_C*>(ABP_STA_C::StaticClass()->DefaultObject);

	return Default;
}

}


