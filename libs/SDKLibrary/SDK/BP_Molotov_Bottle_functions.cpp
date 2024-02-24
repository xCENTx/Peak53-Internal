#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Molotov_Bottle.BP_Molotov_Bottle_C
// (Actor)

class UClass* ABP_Molotov_Bottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Molotov_Bottle_C");

	return Clss;
}


// BP_Molotov_Bottle_C BP_Molotov_Bottle.Default__BP_Molotov_Bottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Molotov_Bottle_C* ABP_Molotov_Bottle_C::GetDefaultObj()
{
	static class ABP_Molotov_Bottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Molotov_Bottle_C*>(ABP_Molotov_Bottle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Molotov_Bottle.BP_Molotov_Bottle_C.SmokeTimeFrame__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Molotov_Bottle_C::SmokeTimeFrame__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Molotov_Bottle_C", "SmokeTimeFrame__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Molotov_Bottle.BP_Molotov_Bottle_C.SmokeTimeFrame__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Molotov_Bottle_C::SmokeTimeFrame__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Molotov_Bottle_C", "SmokeTimeFrame__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Molotov_Bottle.BP_Molotov_Bottle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Molotov_Bottle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Molotov_Bottle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Molotov_Bottle.BP_Molotov_Bottle_C.ExecuteUbergraph_BP_Molotov_Bottle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Molotov_Bottle_C::ExecuteUbergraph_BP_Molotov_Bottle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Molotov_Bottle_C", "ExecuteUbergraph_BP_Molotov_Bottle");

	Params::ABP_Molotov_Bottle_C_ExecuteUbergraph_BP_Molotov_Bottle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


