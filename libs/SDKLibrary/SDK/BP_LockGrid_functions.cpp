#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LockGrid.BP_LockGrid_C
// (Actor)

class UClass* ABP_LockGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LockGrid_C");

	return Clss;
}


// BP_LockGrid_C BP_LockGrid.Default__BP_LockGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LockGrid_C* ABP_LockGrid_C::GetDefaultObj()
{
	static class ABP_LockGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LockGrid_C*>(ABP_LockGrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


