#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodShortWall.BP_WoodShortWall_C
// (Actor)

class UClass* ABP_WoodShortWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodShortWall_C");

	return Clss;
}


// BP_WoodShortWall_C BP_WoodShortWall.Default__BP_WoodShortWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodShortWall_C* ABP_WoodShortWall_C::GetDefaultObj()
{
	static class ABP_WoodShortWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodShortWall_C*>(ABP_WoodShortWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


