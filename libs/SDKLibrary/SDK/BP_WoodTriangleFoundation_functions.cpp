#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodTriangleFoundation.BP_WoodTriangleFoundation_C
// (Actor)

class UClass* ABP_WoodTriangleFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodTriangleFoundation_C");

	return Clss;
}


// BP_WoodTriangleFoundation_C BP_WoodTriangleFoundation.Default__BP_WoodTriangleFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodTriangleFoundation_C* ABP_WoodTriangleFoundation_C::GetDefaultObj()
{
	static class ABP_WoodTriangleFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodTriangleFoundation_C*>(ABP_WoodTriangleFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodTriangleFoundation.BP_WoodTriangleFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WoodTriangleFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodTriangleFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodTriangleFoundation.BP_WoodTriangleFoundation_C.ExecuteUbergraph_BP_WoodTriangleFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodTriangleFoundation_C::ExecuteUbergraph_BP_WoodTriangleFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodTriangleFoundation_C", "ExecuteUbergraph_BP_WoodTriangleFoundation");

	Params::ABP_WoodTriangleFoundation_C_ExecuteUbergraph_BP_WoodTriangleFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


