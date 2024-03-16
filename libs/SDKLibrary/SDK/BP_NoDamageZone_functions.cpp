#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NoDamageZone.BP_NoDamageZone_C
// (Actor)

class UClass* ABP_NoDamageZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NoDamageZone_C");

	return Clss;
}


// BP_NoDamageZone_C BP_NoDamageZone.Default__BP_NoDamageZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NoDamageZone_C* ABP_NoDamageZone_C::GetDefaultObj()
{
	static class ABP_NoDamageZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NoDamageZone_C*>(ABP_NoDamageZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NoDamageZone.BP_NoDamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NoDamageZone_C::UserConstructionScript(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NoDamageZone_C", "UserConstructionScript");

	Params::ABP_NoDamageZone_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


