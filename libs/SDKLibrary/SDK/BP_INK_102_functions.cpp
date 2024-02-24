#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INK_102.BP_INK_102_C
// (Actor)

class UClass* ABP_INK_102_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INK_102_C");

	return Clss;
}


// BP_INK_102_C BP_INK_102.Default__BP_INK_102_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INK_102_C* ABP_INK_102_C::GetDefaultObj()
{
	static class ABP_INK_102_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INK_102_C*>(ABP_INK_102_C::StaticClass()->DefaultObject);

	return Default;
}

}


