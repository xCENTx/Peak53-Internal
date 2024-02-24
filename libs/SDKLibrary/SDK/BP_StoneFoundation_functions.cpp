#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneFoundation.BP_StoneFoundation_C
// (Actor)

class UClass* ABP_StoneFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneFoundation_C");

	return Clss;
}


// BP_StoneFoundation_C BP_StoneFoundation.Default__BP_StoneFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneFoundation_C* ABP_StoneFoundation_C::GetDefaultObj()
{
	static class ABP_StoneFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneFoundation_C*>(ABP_StoneFoundation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneFoundation.BP_StoneFoundation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneFoundation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFoundation_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneFoundation.BP_StoneFoundation_C.ExecuteUbergraph_BP_StoneFoundation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneFoundation_C::ExecuteUbergraph_BP_StoneFoundation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneFoundation_C", "ExecuteUbergraph_BP_StoneFoundation");

	Params::ABP_StoneFoundation_C_ExecuteUbergraph_BP_StoneFoundation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


