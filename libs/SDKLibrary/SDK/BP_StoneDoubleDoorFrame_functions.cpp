#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneDoubleDoorFrame.BP_StoneDoubleDoorFrame_C
// (Actor)

class UClass* ABP_StoneDoubleDoorFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneDoubleDoorFrame_C");

	return Clss;
}


// BP_StoneDoubleDoorFrame_C BP_StoneDoubleDoorFrame.Default__BP_StoneDoubleDoorFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneDoubleDoorFrame_C* ABP_StoneDoubleDoorFrame_C::GetDefaultObj()
{
	static class ABP_StoneDoubleDoorFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneDoubleDoorFrame_C*>(ABP_StoneDoubleDoorFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


