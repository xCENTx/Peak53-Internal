#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneFoundationStairs.BP_StoneFoundationStairs_C
// (Actor)

class UClass* ABP_StoneFoundationStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneFoundationStairs_C");

	return Clss;
}


// BP_StoneFoundationStairs_C BP_StoneFoundationStairs.Default__BP_StoneFoundationStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneFoundationStairs_C* ABP_StoneFoundationStairs_C::GetDefaultObj()
{
	static class ABP_StoneFoundationStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneFoundationStairs_C*>(ABP_StoneFoundationStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


