#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DE50.BP_DE50_C
// (Actor)

class UClass* ABP_DE50_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DE50_C");

	return Clss;
}


// BP_DE50_C BP_DE50.Default__BP_DE50_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DE50_C* ABP_DE50_C::GetDefaultObj()
{
	static class ABP_DE50_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DE50_C*>(ABP_DE50_C::StaticClass()->DefaultObject);

	return Default;
}

}


