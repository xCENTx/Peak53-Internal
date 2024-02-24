#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M4A4ReddotAttach.BP_M4A4ReddotAttach_C
// (Actor)

class UClass* ABP_M4A4ReddotAttach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M4A4ReddotAttach_C");

	return Clss;
}


// BP_M4A4ReddotAttach_C BP_M4A4ReddotAttach.Default__BP_M4A4ReddotAttach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M4A4ReddotAttach_C* ABP_M4A4ReddotAttach_C::GetDefaultObj()
{
	static class ABP_M4A4ReddotAttach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M4A4ReddotAttach_C*>(ABP_M4A4ReddotAttach_C::StaticClass()->DefaultObject);

	return Default;
}

}


