#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AAP_9.BP_AAP_9_C
// (Actor)

class UClass* ABP_AAP_9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AAP_9_C");

	return Clss;
}


// BP_AAP_9_C BP_AAP_9.Default__BP_AAP_9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AAP_9_C* ABP_AAP_9_C::GetDefaultObj()
{
	static class ABP_AAP_9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AAP_9_C*>(ABP_AAP_9_C::StaticClass()->DefaultObject);

	return Default;
}

}


