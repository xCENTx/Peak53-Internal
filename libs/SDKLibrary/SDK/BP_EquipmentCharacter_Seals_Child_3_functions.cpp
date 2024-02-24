#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentCharacter_Seals_Child_3.BP_EquipmentCharacter_Seals_Child_3_C
// (Actor, Pawn)

class UClass* ABP_EquipmentCharacter_Seals_Child_3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentCharacter_Seals_Child_3_C");

	return Clss;
}


// BP_EquipmentCharacter_Seals_Child_3_C BP_EquipmentCharacter_Seals_Child_3.Default__BP_EquipmentCharacter_Seals_Child_3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentCharacter_Seals_Child_3_C* ABP_EquipmentCharacter_Seals_Child_3_C::GetDefaultObj()
{
	static class ABP_EquipmentCharacter_Seals_Child_3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentCharacter_Seals_Child_3_C*>(ABP_EquipmentCharacter_Seals_Child_3_C::StaticClass()->DefaultObject);

	return Default;
}

}


