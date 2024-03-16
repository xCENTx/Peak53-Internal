#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RA15.BP_RA15_C
// (Actor)

class UClass* ABP_RA15_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RA15_C");

	return Clss;
}


// BP_RA15_C BP_RA15.Default__BP_RA15_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RA15_C* ABP_RA15_C::GetDefaultObj()
{
	static class ABP_RA15_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RA15_C*>(ABP_RA15_C::StaticClass()->DefaultObject);

	return Default;
}

}


