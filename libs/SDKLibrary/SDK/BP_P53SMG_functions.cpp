#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P53SMG.BP_P53SMG_C
// (Actor)

class UClass* ABP_P53SMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P53SMG_C");

	return Clss;
}


// BP_P53SMG_C BP_P53SMG.Default__BP_P53SMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P53SMG_C* ABP_P53SMG_C::GetDefaultObj()
{
	static class ABP_P53SMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P53SMG_C*>(ABP_P53SMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


