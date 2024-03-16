#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneUStairs.BP_StoneUStairs_C
// (Actor)

class UClass* ABP_StoneUStairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneUStairs_C");

	return Clss;
}


// BP_StoneUStairs_C BP_StoneUStairs.Default__BP_StoneUStairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneUStairs_C* ABP_StoneUStairs_C::GetDefaultObj()
{
	static class ABP_StoneUStairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneUStairs_C*>(ABP_StoneUStairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


