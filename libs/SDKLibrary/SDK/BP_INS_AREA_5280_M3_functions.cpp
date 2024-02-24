#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INS_AREA_5280_M3.BP_INS_AREA_5280_M3_C
// (Actor, Pawn)

class UClass* ABP_INS_AREA_5280_M3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INS_AREA_5280_M3_C");

	return Clss;
}


// BP_INS_AREA_5280_M3_C BP_INS_AREA_5280_M3.Default__BP_INS_AREA_5280_M3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INS_AREA_5280_M3_C* ABP_INS_AREA_5280_M3_C::GetDefaultObj()
{
	static class ABP_INS_AREA_5280_M3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INS_AREA_5280_M3_C*>(ABP_INS_AREA_5280_M3_C::StaticClass()->DefaultObject);

	return Default;
}

}


