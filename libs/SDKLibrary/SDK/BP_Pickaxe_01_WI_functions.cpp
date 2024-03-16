#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickaxe_01_WI.BP_Pickaxe_01_WI_C
// (Actor)

class UClass* ABP_Pickaxe_01_WI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickaxe_01_WI_C");

	return Clss;
}


// BP_Pickaxe_01_WI_C BP_Pickaxe_01_WI.Default__BP_Pickaxe_01_WI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickaxe_01_WI_C* ABP_Pickaxe_01_WI_C::GetDefaultObj()
{
	static class ABP_Pickaxe_01_WI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickaxe_01_WI_C*>(ABP_Pickaxe_01_WI_C::StaticClass()->DefaultObject);

	return Default;
}

}


