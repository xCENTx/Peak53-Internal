#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicWall.BP_BasicWall_C
// (Actor)

class UClass* ABP_BasicWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicWall_C");

	return Clss;
}


// BP_BasicWall_C BP_BasicWall.Default__BP_BasicWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicWall_C* ABP_BasicWall_C::GetDefaultObj()
{
	static class ABP_BasicWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicWall_C*>(ABP_BasicWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


