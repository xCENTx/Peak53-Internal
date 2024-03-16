#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalDoorFrame.BP_MetalDoorFrame_C
// (Actor)

class UClass* ABP_MetalDoorFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalDoorFrame_C");

	return Clss;
}


// BP_MetalDoorFrame_C BP_MetalDoorFrame.Default__BP_MetalDoorFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalDoorFrame_C* ABP_MetalDoorFrame_C::GetDefaultObj()
{
	static class ABP_MetalDoorFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalDoorFrame_C*>(ABP_MetalDoorFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


