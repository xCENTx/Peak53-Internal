#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneTriangleFloor.BP_StoneTriangleFloor_C
// (Actor)

class UClass* ABP_StoneTriangleFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneTriangleFloor_C");

	return Clss;
}


// BP_StoneTriangleFloor_C BP_StoneTriangleFloor.Default__BP_StoneTriangleFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneTriangleFloor_C* ABP_StoneTriangleFloor_C::GetDefaultObj()
{
	static class ABP_StoneTriangleFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneTriangleFloor_C*>(ABP_StoneTriangleFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneTriangleFloor.BP_StoneTriangleFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneTriangleFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneTriangleFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneTriangleFloor.BP_StoneTriangleFloor_C.ExecuteUbergraph_BP_StoneTriangleFloor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneTriangleFloor_C::ExecuteUbergraph_BP_StoneTriangleFloor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneTriangleFloor_C", "ExecuteUbergraph_BP_StoneTriangleFloor");

	Params::ABP_StoneTriangleFloor_C_ExecuteUbergraph_BP_StoneTriangleFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


