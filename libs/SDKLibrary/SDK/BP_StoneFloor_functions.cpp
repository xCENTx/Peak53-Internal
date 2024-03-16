#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneFloor.BP_StoneFloor_C
// (Actor)

class UClass* ABP_StoneFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneFloor_C");

	return Clss;
}


// BP_StoneFloor_C BP_StoneFloor.Default__BP_StoneFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneFloor_C* ABP_StoneFloor_C::GetDefaultObj()
{
	static class ABP_StoneFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneFloor_C*>(ABP_StoneFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneFloor.BP_StoneFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFloor.BP_StoneFloor_C.ExecuteUbergraph_BP_StoneFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneFloor_C::ExecuteUbergraph_BP_StoneFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFloor_C", "ExecuteUbergraph_BP_StoneFloor");

	Params::ABP_StoneFloor_C_ExecuteUbergraph_BP_StoneFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


