#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicFoundation.BP_BasicFoundation_C
// (Actor)

class UClass* ABP_BasicFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicFoundation_C");

	return Clss;
}


// BP_BasicFoundation_C BP_BasicFoundation.Default__BP_BasicFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicFoundation_C* ABP_BasicFoundation_C::GetDefaultObj()
{
	static class ABP_BasicFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicFoundation_C*>(ABP_BasicFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BasicFoundation.BP_BasicFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BasicFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BasicFoundation.BP_BasicFoundation_C.ExecuteUbergraph_BP_BasicFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BasicFoundation_C::ExecuteUbergraph_BP_BasicFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicFoundation_C", "ExecuteUbergraph_BP_BasicFoundation");

	Params::ABP_BasicFoundation_C_ExecuteUbergraph_BP_BasicFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


