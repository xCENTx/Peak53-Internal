#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INS_SALT_MINE_MX2.BP_INS_SALT_MINE_MX2_C
// (Actor, Pawn)

class UClass* ABP_INS_SALT_MINE_MX2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INS_SALT_MINE_MX2_C");

	return Clss;
}


// BP_INS_SALT_MINE_MX2_C BP_INS_SALT_MINE_MX2.Default__BP_INS_SALT_MINE_MX2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INS_SALT_MINE_MX2_C* ABP_INS_SALT_MINE_MX2_C::GetDefaultObj()
{
	static class ABP_INS_SALT_MINE_MX2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INS_SALT_MINE_MX2_C*>(ABP_INS_SALT_MINE_MX2_C::StaticClass()->DefaultObject);

	return Default;
}

}


