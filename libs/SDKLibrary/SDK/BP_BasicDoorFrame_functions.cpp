#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicDoorFrame.BP_BasicDoorFrame_C
// (Actor)

class UClass* ABP_BasicDoorFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicDoorFrame_C");

	return Clss;
}


// BP_BasicDoorFrame_C BP_BasicDoorFrame.Default__BP_BasicDoorFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicDoorFrame_C* ABP_BasicDoorFrame_C::GetDefaultObj()
{
	static class ABP_BasicDoorFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicDoorFrame_C*>(ABP_BasicDoorFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


