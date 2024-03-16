#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_1911_Black.BP_1911_Black_C
// (Actor)

class UClass* ABP_1911_Black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_1911_Black_C");

	return Clss;
}


// BP_1911_Black_C BP_1911_Black.Default__BP_1911_Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_1911_Black_C* ABP_1911_Black_C::GetDefaultObj()
{
	static class ABP_1911_Black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_1911_Black_C*>(ABP_1911_Black_C::StaticClass()->DefaultObject);

	return Default;
}

}


