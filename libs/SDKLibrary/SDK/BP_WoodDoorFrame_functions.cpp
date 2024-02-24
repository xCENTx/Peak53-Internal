#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodDoorFrame.BP_WoodDoorFrame_C
// (Actor)

class UClass* ABP_WoodDoorFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodDoorFrame_C");

	return Clss;
}


// BP_WoodDoorFrame_C BP_WoodDoorFrame.Default__BP_WoodDoorFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodDoorFrame_C* ABP_WoodDoorFrame_C::GetDefaultObj()
{
	static class ABP_WoodDoorFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodDoorFrame_C*>(ABP_WoodDoorFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


