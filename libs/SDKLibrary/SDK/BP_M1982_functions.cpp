#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M1982.BP_M1982_C
// (Actor)

class UClass* ABP_M1982_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M1982_C");

	return Clss;
}


// BP_M1982_C BP_M1982.Default__BP_M1982_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M1982_C* ABP_M1982_C::GetDefaultObj()
{
	static class ABP_M1982_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M1982_C*>(ABP_M1982_C::StaticClass()->DefaultObject);

	return Default;
}

}


