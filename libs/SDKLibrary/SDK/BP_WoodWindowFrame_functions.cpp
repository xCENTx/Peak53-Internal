#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodWindowFrame.BP_WoodWindowFrame_C
// (Actor)

class UClass* ABP_WoodWindowFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodWindowFrame_C");

	return Clss;
}


// BP_WoodWindowFrame_C BP_WoodWindowFrame.Default__BP_WoodWindowFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodWindowFrame_C* ABP_WoodWindowFrame_C::GetDefaultObj()
{
	static class ABP_WoodWindowFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodWindowFrame_C*>(ABP_WoodWindowFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


