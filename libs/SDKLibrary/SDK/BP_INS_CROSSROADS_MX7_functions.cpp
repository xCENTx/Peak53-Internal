#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INS_CROSSROADS_MX7.BP_INS_CROSSROADS_MX7_C
// (Actor, Pawn)

class UClass* ABP_INS_CROSSROADS_MX7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INS_CROSSROADS_MX7_C");

	return Clss;
}


// BP_INS_CROSSROADS_MX7_C BP_INS_CROSSROADS_MX7.Default__BP_INS_CROSSROADS_MX7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INS_CROSSROADS_MX7_C* ABP_INS_CROSSROADS_MX7_C::GetDefaultObj()
{
	static class ABP_INS_CROSSROADS_MX7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INS_CROSSROADS_MX7_C*>(ABP_INS_CROSSROADS_MX7_C::StaticClass()->DefaultObject);

	return Default;
}

}


