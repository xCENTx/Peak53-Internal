#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasicTriangleFoundation.BP_BasicTriangleFoundation_C
// (Actor)

class UClass* ABP_BasicTriangleFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasicTriangleFoundation_C");

	return Clss;
}


// BP_BasicTriangleFoundation_C BP_BasicTriangleFoundation.Default__BP_BasicTriangleFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasicTriangleFoundation_C* ABP_BasicTriangleFoundation_C::GetDefaultObj()
{
	static class ABP_BasicTriangleFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasicTriangleFoundation_C*>(ABP_BasicTriangleFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BasicTriangleFoundation.BP_BasicTriangleFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BasicTriangleFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicTriangleFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BasicTriangleFoundation.BP_BasicTriangleFoundation_C.ExecuteUbergraph_BP_BasicTriangleFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BasicTriangleFoundation_C::ExecuteUbergraph_BP_BasicTriangleFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasicTriangleFoundation_C", "ExecuteUbergraph_BP_BasicTriangleFoundation");

	Params::ABP_BasicTriangleFoundation_C_ExecuteUbergraph_BP_BasicTriangleFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


