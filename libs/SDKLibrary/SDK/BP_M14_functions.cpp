#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M14.BP_M14_C
// (Actor)

class UClass* ABP_M14_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M14_C");

	return Clss;
}


// BP_M14_C BP_M14.Default__BP_M14_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M14_C* ABP_M14_C::GetDefaultObj()
{
	static class ABP_M14_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M14_C*>(ABP_M14_C::StaticClass()->DefaultObject);

	return Default;
}

}


