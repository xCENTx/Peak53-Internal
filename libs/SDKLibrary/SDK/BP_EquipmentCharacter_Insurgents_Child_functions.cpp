#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentCharacter_Insurgents_Child.BP_EquipmentCharacter_Insurgents_Child_C
// (Actor, Pawn)

class UClass* ABP_EquipmentCharacter_Insurgents_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentCharacter_Insurgents_Child_C");

	return Clss;
}


// BP_EquipmentCharacter_Insurgents_Child_C BP_EquipmentCharacter_Insurgents_Child.Default__BP_EquipmentCharacter_Insurgents_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentCharacter_Insurgents_Child_C* ABP_EquipmentCharacter_Insurgents_Child_C::GetDefaultObj()
{
	static class ABP_EquipmentCharacter_Insurgents_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentCharacter_Insurgents_Child_C*>(ABP_EquipmentCharacter_Insurgents_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


