#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MR_920.BP_MR_920_C
// (Actor)

class UClass* ABP_MR_920_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MR_920_C");

	return Clss;
}


// BP_MR_920_C BP_MR_920.Default__BP_MR_920_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MR_920_C* ABP_MR_920_C::GetDefaultObj()
{
	static class ABP_MR_920_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MR_920_C*>(ABP_MR_920_C::StaticClass()->DefaultObject);

	return Default;
}

}


