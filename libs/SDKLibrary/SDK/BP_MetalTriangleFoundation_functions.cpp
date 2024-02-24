#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalTriangleFoundation.BP_MetalTriangleFoundation_C
// (Actor)

class UClass* ABP_MetalTriangleFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalTriangleFoundation_C");

	return Clss;
}


// BP_MetalTriangleFoundation_C BP_MetalTriangleFoundation.Default__BP_MetalTriangleFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalTriangleFoundation_C* ABP_MetalTriangleFoundation_C::GetDefaultObj()
{
	static class ABP_MetalTriangleFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalTriangleFoundation_C*>(ABP_MetalTriangleFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MetalTriangleFoundation.BP_MetalTriangleFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MetalTriangleFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalTriangleFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MetalTriangleFoundation.BP_MetalTriangleFoundation_C.ExecuteUbergraph_BP_MetalTriangleFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetalTriangleFoundation_C::ExecuteUbergraph_BP_MetalTriangleFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalTriangleFoundation_C", "ExecuteUbergraph_BP_MetalTriangleFoundation");

	Params::ABP_MetalTriangleFoundation_C_ExecuteUbergraph_BP_MetalTriangleFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


