#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalWindowFrame.BP_MetalWindowFrame_C
// (Actor)

class UClass* ABP_MetalWindowFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalWindowFrame_C");

	return Clss;
}


// BP_MetalWindowFrame_C BP_MetalWindowFrame.Default__BP_MetalWindowFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalWindowFrame_C* ABP_MetalWindowFrame_C::GetDefaultObj()
{
	static class ABP_MetalWindowFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalWindowFrame_C*>(ABP_MetalWindowFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


