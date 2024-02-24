#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneWindowFrame.BP_StoneWindowFrame_C
// (Actor)

class UClass* ABP_StoneWindowFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneWindowFrame_C");

	return Clss;
}


// BP_StoneWindowFrame_C BP_StoneWindowFrame.Default__BP_StoneWindowFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneWindowFrame_C* ABP_StoneWindowFrame_C::GetDefaultObj()
{
	static class ABP_StoneWindowFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneWindowFrame_C*>(ABP_StoneWindowFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


