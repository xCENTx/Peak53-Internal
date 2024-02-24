#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalFloor.BP_MetalFloor_C
// (Actor)

class UClass* ABP_MetalFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalFloor_C");

	return Clss;
}


// BP_MetalFloor_C BP_MetalFloor.Default__BP_MetalFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalFloor_C* ABP_MetalFloor_C::GetDefaultObj()
{
	static class ABP_MetalFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalFloor_C*>(ABP_MetalFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MetalFloor.BP_MetalFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MetalFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MetalFloor.BP_MetalFloor_C.ExecuteUbergraph_BP_MetalFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetalFloor_C::ExecuteUbergraph_BP_MetalFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalFloor_C", "ExecuteUbergraph_BP_MetalFloor");

	Params::ABP_MetalFloor_C_ExecuteUbergraph_BP_MetalFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


