#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodTriangleFloor.BP_WoodTriangleFloor_C
// (Actor)

class UClass* ABP_WoodTriangleFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodTriangleFloor_C");

	return Clss;
}


// BP_WoodTriangleFloor_C BP_WoodTriangleFloor.Default__BP_WoodTriangleFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodTriangleFloor_C* ABP_WoodTriangleFloor_C::GetDefaultObj()
{
	static class ABP_WoodTriangleFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodTriangleFloor_C*>(ABP_WoodTriangleFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodTriangleFloor.BP_WoodTriangleFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WoodTriangleFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodTriangleFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodTriangleFloor.BP_WoodTriangleFloor_C.ExecuteUbergraph_BP_WoodTriangleFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodTriangleFloor_C::ExecuteUbergraph_BP_WoodTriangleFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodTriangleFloor_C", "ExecuteUbergraph_BP_WoodTriangleFloor");

	Params::ABP_WoodTriangleFloor_C_ExecuteUbergraph_BP_WoodTriangleFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


