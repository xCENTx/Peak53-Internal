#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodFloor.BP_WoodFloor_C
// (Actor)

class UClass* ABP_WoodFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodFloor_C");

	return Clss;
}


// BP_WoodFloor_C BP_WoodFloor.Default__BP_WoodFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodFloor_C* ABP_WoodFloor_C::GetDefaultObj()
{
	static class ABP_WoodFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodFloor_C*>(ABP_WoodFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodFloor.BP_WoodFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WoodFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodFloor.BP_WoodFloor_C.ExecuteUbergraph_BP_WoodFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodFloor_C::ExecuteUbergraph_BP_WoodFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodFloor_C", "ExecuteUbergraph_BP_WoodFloor");

	Params::ABP_WoodFloor_C_ExecuteUbergraph_BP_WoodFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


