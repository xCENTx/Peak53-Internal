#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicFloor.BP_BasicFloor_C
// (Actor)

class UClass* ABP_BasicFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicFloor_C");

	return Clss;
}


// BP_BasicFloor_C BP_BasicFloor.Default__BP_BasicFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicFloor_C* ABP_BasicFloor_C::GetDefaultObj()
{
	static class ABP_BasicFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicFloor_C*>(ABP_BasicFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BasicFloor.BP_BasicFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BasicFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BasicFloor.BP_BasicFloor_C.ExecuteUbergraph_BP_BasicFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BasicFloor_C::ExecuteUbergraph_BP_BasicFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicFloor_C", "ExecuteUbergraph_BP_BasicFloor");

	Params::ABP_BasicFloor_C_ExecuteUbergraph_BP_BasicFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


