#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_F90.BP_F90_C
// (Actor)

class UClass* ABP_F90_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_F90_C");

	return Clss;
}


// BP_F90_C BP_F90.Default__BP_F90_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_F90_C* ABP_F90_C::GetDefaultObj()
{
	static class ABP_F90_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_F90_C*>(ABP_F90_C::StaticClass()->DefaultObject);

	return Default;
}

}


