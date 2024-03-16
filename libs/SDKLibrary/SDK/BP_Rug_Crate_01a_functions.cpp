#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rug_Crate_01a.BP_Rug_Crate_01a_C
// (Actor)

class UClass* ABP_Rug_Crate_01a_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rug_Crate_01a_C");

	return Clss;
}


// BP_Rug_Crate_01a_C BP_Rug_Crate_01a.Default__BP_Rug_Crate_01a_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rug_Crate_01a_C* ABP_Rug_Crate_01a_C::GetDefaultObj()
{
	static class ABP_Rug_Crate_01a_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rug_Crate_01a_C*>(ABP_Rug_Crate_01a_C::StaticClass()->DefaultObject);

	return Default;
}

}


