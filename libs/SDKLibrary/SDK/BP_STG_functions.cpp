#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_STG.BP_STG_C
// (Actor)

class UClass* ABP_STG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_STG_C");

	return Clss;
}


// BP_STG_C BP_STG.Default__BP_STG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_STG_C* ABP_STG_C::GetDefaultObj()
{
	static class ABP_STG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_STG_C*>(ABP_STG_C::StaticClass()->DefaultObject);

	return Default;
}

}


