#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Axe_01_WI.BP_Axe_01_WI_C
// (Actor)

class UClass* ABP_Axe_01_WI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Axe_01_WI_C");

	return Clss;
}


// BP_Axe_01_WI_C BP_Axe_01_WI.Default__BP_Axe_01_WI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Axe_01_WI_C* ABP_Axe_01_WI_C::GetDefaultObj()
{
	static class ABP_Axe_01_WI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Axe_01_WI_C*>(ABP_Axe_01_WI_C::StaticClass()->DefaultObject);

	return Default;
}

}


