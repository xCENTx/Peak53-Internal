#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneShortWall.BP_StoneShortWall_C
// (Actor)

class UClass* ABP_StoneShortWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneShortWall_C");

	return Clss;
}


// BP_StoneShortWall_C BP_StoneShortWall.Default__BP_StoneShortWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneShortWall_C* ABP_StoneShortWall_C::GetDefaultObj()
{
	static class ABP_StoneShortWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneShortWall_C*>(ABP_StoneShortWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


