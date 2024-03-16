#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INK_Prototype_Z.BP_INK_Prototype_Z_C
// (Actor)

class UClass* ABP_INK_Prototype_Z_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INK_Prototype_Z_C");

	return Clss;
}


// BP_INK_Prototype_Z_C BP_INK_Prototype_Z.Default__BP_INK_Prototype_Z_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INK_Prototype_Z_C* ABP_INK_Prototype_Z_C::GetDefaultObj()
{
	static class ABP_INK_Prototype_Z_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INK_Prototype_Z_C*>(ABP_INK_Prototype_Z_C::StaticClass()->DefaultObject);

	return Default;
}

}


