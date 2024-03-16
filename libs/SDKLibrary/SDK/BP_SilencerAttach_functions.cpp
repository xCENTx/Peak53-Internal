#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SilencerAttach.BP_SilencerAttach_C
// (Actor)

class UClass* ABP_SilencerAttach_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SilencerAttach_C");

	return Clss;
}


// BP_SilencerAttach_C BP_SilencerAttach.Default__BP_SilencerAttach_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SilencerAttach_C* ABP_SilencerAttach_C::GetDefaultObj()
{
	static class ABP_SilencerAttach_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SilencerAttach_C*>(ABP_SilencerAttach_C::StaticClass()->DefaultObject);

	return Default;
}

}


