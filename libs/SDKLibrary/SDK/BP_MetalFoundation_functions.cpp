#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalFoundation.BP_MetalFoundation_C
// (Actor)

class UClass* ABP_MetalFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalFoundation_C");

	return Clss;
}


// BP_MetalFoundation_C BP_MetalFoundation.Default__BP_MetalFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalFoundation_C* ABP_MetalFoundation_C::GetDefaultObj()
{
	static class ABP_MetalFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalFoundation_C*>(ABP_MetalFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MetalFoundation.BP_MetalFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MetalFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MetalFoundation.BP_MetalFoundation_C.ExecuteUbergraph_BP_MetalFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetalFoundation_C::ExecuteUbergraph_BP_MetalFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalFoundation_C", "ExecuteUbergraph_BP_MetalFoundation");

	Params::ABP_MetalFoundation_C_ExecuteUbergraph_BP_MetalFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


