#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NAT_122.BP_NAT_122_C
// (Actor)

class UClass* ABP_NAT_122_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NAT_122_C");

	return Clss;
}


// BP_NAT_122_C BP_NAT_122.Default__BP_NAT_122_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NAT_122_C* ABP_NAT_122_C::GetDefaultObj()
{
	static class ABP_NAT_122_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NAT_122_C*>(ABP_NAT_122_C::StaticClass()->DefaultObject);

	return Default;
}

}


