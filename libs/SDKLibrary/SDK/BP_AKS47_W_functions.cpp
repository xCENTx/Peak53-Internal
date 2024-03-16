#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AKS47_W.BP_AKS47_W_C
// (Actor)

class UClass* ABP_AKS47_W_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AKS47_W_C");

	return Clss;
}


// BP_AKS47_W_C BP_AKS47_W.Default__BP_AKS47_W_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AKS47_W_C* ABP_AKS47_W_C::GetDefaultObj()
{
	static class ABP_AKS47_W_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AKS47_W_C*>(ABP_AKS47_W_C::StaticClass()->DefaultObject);

	return Default;
}

}


