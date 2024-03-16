#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_R2T_Weapon.BP_R2T_Weapon_C
// (Actor)

class UClass* ABP_R2T_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_R2T_Weapon_C");

	return Clss;
}


// BP_R2T_Weapon_C BP_R2T_Weapon.Default__BP_R2T_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_R2T_Weapon_C* ABP_R2T_Weapon_C::GetDefaultObj()
{
	static class ABP_R2T_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_R2T_Weapon_C*>(ABP_R2T_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_R2T_Weapon.BP_R2T_Weapon_C.Set Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WeaponClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_R2T_Weapon_C::Set_Weapon(class UClass* WeaponClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_R2T_Weapon_C", "Set Weapon");

	Params::ABP_R2T_Weapon_C_Set_Weapon_Params Parms{};

	Parms.WeaponClass = WeaponClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_R2T_Weapon.BP_R2T_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_R2T_Weapon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_R2T_Weapon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


