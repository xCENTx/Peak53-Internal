#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P226.BP_P226_C
// (Actor)

class UClass* ABP_P226_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P226_C");

	return Clss;
}


// BP_P226_C BP_P226.Default__BP_P226_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P226_C* ABP_P226_C::GetDefaultObj()
{
	static class ABP_P226_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P226_C*>(ABP_P226_C::StaticClass()->DefaultObject);

	return Default;
}

}


