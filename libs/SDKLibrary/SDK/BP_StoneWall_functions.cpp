#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneWall.BP_StoneWall_C
// (Actor)

class UClass* ABP_StoneWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneWall_C");

	return Clss;
}


// BP_StoneWall_C BP_StoneWall.Default__BP_StoneWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneWall_C* ABP_StoneWall_C::GetDefaultObj()
{
	static class ABP_StoneWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneWall_C*>(ABP_StoneWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


