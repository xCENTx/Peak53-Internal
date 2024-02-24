#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P1911.BP_P1911_C
// (Actor)

class UClass* ABP_P1911_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P1911_C");

	return Clss;
}


// BP_P1911_C BP_P1911.Default__BP_P1911_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P1911_C* ABP_P1911_C::GetDefaultObj()
{
	static class ABP_P1911_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P1911_C*>(ABP_P1911_C::StaticClass()->DefaultObject);

	return Default;
}

}


