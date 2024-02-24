#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneTriangleFoundation.BP_StoneTriangleFoundation_C
// (Actor)

class UClass* ABP_StoneTriangleFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneTriangleFoundation_C");

	return Clss;
}


// BP_StoneTriangleFoundation_C BP_StoneTriangleFoundation.Default__BP_StoneTriangleFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneTriangleFoundation_C* ABP_StoneTriangleFoundation_C::GetDefaultObj()
{
	static class ABP_StoneTriangleFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneTriangleFoundation_C*>(ABP_StoneTriangleFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneTriangleFoundation.BP_StoneTriangleFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneTriangleFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneTriangleFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneTriangleFoundation.BP_StoneTriangleFoundation_C.ExecuteUbergraph_BP_StoneTriangleFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneTriangleFoundation_C::ExecuteUbergraph_BP_StoneTriangleFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneTriangleFoundation_C", "ExecuteUbergraph_BP_StoneTriangleFoundation");

	Params::ABP_StoneTriangleFoundation_C_ExecuteUbergraph_BP_StoneTriangleFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


