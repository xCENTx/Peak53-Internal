#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodWall.BP_WoodWall_C
// (Actor)

class UClass* ABP_WoodWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodWall_C");

	return Clss;
}


// BP_WoodWall_C BP_WoodWall.Default__BP_WoodWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodWall_C* ABP_WoodWall_C::GetDefaultObj()
{
	static class ABP_WoodWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodWall_C*>(ABP_WoodWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


