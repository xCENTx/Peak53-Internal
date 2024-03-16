#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P9.BP_P9_C
// (Actor)

class UClass* ABP_P9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P9_C");

	return Clss;
}


// BP_P9_C BP_P9.Default__BP_P9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P9_C* ABP_P9_C::GetDefaultObj()
{
	static class ABP_P9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P9_C*>(ABP_P9_C::StaticClass()->DefaultObject);

	return Default;
}

}


