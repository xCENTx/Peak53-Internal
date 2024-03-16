#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodFoundation.BP_WoodFoundation_C
// (Actor)

class UClass* ABP_WoodFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodFoundation_C");

	return Clss;
}


// BP_WoodFoundation_C BP_WoodFoundation.Default__BP_WoodFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodFoundation_C* ABP_WoodFoundation_C::GetDefaultObj()
{
	static class ABP_WoodFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodFoundation_C*>(ABP_WoodFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodFoundation.BP_WoodFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WoodFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodFoundation.BP_WoodFoundation_C.ExecuteUbergraph_BP_WoodFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodFoundation_C::ExecuteUbergraph_BP_WoodFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodFoundation_C", "ExecuteUbergraph_BP_WoodFoundation");

	Params::ABP_WoodFoundation_C_ExecuteUbergraph_BP_WoodFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


