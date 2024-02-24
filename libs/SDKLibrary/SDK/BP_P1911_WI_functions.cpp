#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P1911_WI.BP_P1911_WI_C
// (Actor)

class UClass* ABP_P1911_WI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P1911_WI_C");

	return Clss;
}


// BP_P1911_WI_C BP_P1911_WI.Default__BP_P1911_WI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P1911_WI_C* ABP_P1911_WI_C::GetDefaultObj()
{
	static class ABP_P1911_WI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P1911_WI_C*>(ABP_P1911_WI_C::StaticClass()->DefaultObject);

	return Default;
}

}


