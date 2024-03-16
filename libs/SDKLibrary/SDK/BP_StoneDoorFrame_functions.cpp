#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneDoorFrame.BP_StoneDoorFrame_C
// (Actor)

class UClass* ABP_StoneDoorFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneDoorFrame_C");

	return Clss;
}


// BP_StoneDoorFrame_C BP_StoneDoorFrame.Default__BP_StoneDoorFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneDoorFrame_C* ABP_StoneDoorFrame_C::GetDefaultObj()
{
	static class ABP_StoneDoorFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneDoorFrame_C*>(ABP_StoneDoorFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


