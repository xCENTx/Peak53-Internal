#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodDoubleDoorFrame.BP_WoodDoubleDoorFrame_C
// (Actor)

class UClass* ABP_WoodDoubleDoorFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodDoubleDoorFrame_C");

	return Clss;
}


// BP_WoodDoubleDoorFrame_C BP_WoodDoubleDoorFrame.Default__BP_WoodDoubleDoorFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodDoubleDoorFrame_C* ABP_WoodDoubleDoorFrame_C::GetDefaultObj()
{
	static class ABP_WoodDoubleDoorFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodDoubleDoorFrame_C*>(ABP_WoodDoubleDoorFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


