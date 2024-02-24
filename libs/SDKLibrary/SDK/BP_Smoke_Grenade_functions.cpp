#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Smoke_Grenade.BP_Smoke_Grenade_C
// (Actor)

class UClass* ABP_Smoke_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Smoke_Grenade_C");

	return Clss;
}


// BP_Smoke_Grenade_C BP_Smoke_Grenade.Default__BP_Smoke_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Smoke_Grenade_C* ABP_Smoke_Grenade_C::GetDefaultObj()
{
	static class ABP_Smoke_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Smoke_Grenade_C*>(ABP_Smoke_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Smoke_Grenade.BP_Smoke_Grenade_C.SmokeTimeFrame__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Smoke_Grenade_C::SmokeTimeFrame__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Smoke_Grenade_C", "SmokeTimeFrame__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Smoke_Grenade.BP_Smoke_Grenade_C.SmokeTimeFrame__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Smoke_Grenade_C::SmokeTimeFrame__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Smoke_Grenade_C", "SmokeTimeFrame__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Smoke_Grenade.BP_Smoke_Grenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Smoke_Grenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Smoke_Grenade_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Smoke_Grenade.BP_Smoke_Grenade_C.ExecuteUbergraph_BP_Smoke_Grenade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Smoke_Grenade_C::ExecuteUbergraph_BP_Smoke_Grenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Smoke_Grenade_C", "ExecuteUbergraph_BP_Smoke_Grenade");

	Params::ABP_Smoke_Grenade_C_ExecuteUbergraph_BP_Smoke_Grenade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


