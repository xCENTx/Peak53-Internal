#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicTriangleFloor.BP_BasicTriangleFloor_C
// (Actor)

class UClass* ABP_BasicTriangleFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicTriangleFloor_C");

	return Clss;
}


// BP_BasicTriangleFloor_C BP_BasicTriangleFloor.Default__BP_BasicTriangleFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicTriangleFloor_C* ABP_BasicTriangleFloor_C::GetDefaultObj()
{
	static class ABP_BasicTriangleFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicTriangleFloor_C*>(ABP_BasicTriangleFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BasicTriangleFloor.BP_BasicTriangleFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BasicTriangleFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicTriangleFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BasicTriangleFloor.BP_BasicTriangleFloor_C.ExecuteUbergraph_BP_BasicTriangleFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BasicTriangleFloor_C::ExecuteUbergraph_BP_BasicTriangleFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicTriangleFloor_C", "ExecuteUbergraph_BP_BasicTriangleFloor");

	Params::ABP_BasicTriangleFloor_C_ExecuteUbergraph_BP_BasicTriangleFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


