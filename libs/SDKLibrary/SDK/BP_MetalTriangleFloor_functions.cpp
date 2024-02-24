#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalTriangleFloor.BP_MetalTriangleFloor_C
// (Actor)

class UClass* ABP_MetalTriangleFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalTriangleFloor_C");

	return Clss;
}


// BP_MetalTriangleFloor_C BP_MetalTriangleFloor.Default__BP_MetalTriangleFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalTriangleFloor_C* ABP_MetalTriangleFloor_C::GetDefaultObj()
{
	static class ABP_MetalTriangleFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalTriangleFloor_C*>(ABP_MetalTriangleFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MetalTriangleFloor.BP_MetalTriangleFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MetalTriangleFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalTriangleFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MetalTriangleFloor.BP_MetalTriangleFloor_C.ExecuteUbergraph_BP_MetalTriangleFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetalTriangleFloor_C::ExecuteUbergraph_BP_MetalTriangleFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalTriangleFloor_C", "ExecuteUbergraph_BP_MetalTriangleFloor");

	Params::ABP_MetalTriangleFloor_C_ExecuteUbergraph_BP_MetalTriangleFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


