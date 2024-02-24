#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_9mm_WI.BP_9mm_WI_C
// (Actor)

class UClass* ABP_9mm_WI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_9mm_WI_C");

	return Clss;
}


// BP_9mm_WI_C BP_9mm_WI.Default__BP_9mm_WI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_9mm_WI_C* ABP_9mm_WI_C::GetDefaultObj()
{
	static class ABP_9mm_WI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_9mm_WI_C*>(ABP_9mm_WI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_9mm_WI.BP_9mm_WI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_9mm_WI_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_9mm_WI_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_9mm_WI.BP_9mm_WI_C.ExecuteUbergraph_BP_9mm_WI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_9mm_WI_C::ExecuteUbergraph_BP_9mm_WI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_9mm_WI_C", "ExecuteUbergraph_BP_9mm_WI");

	Params::ABP_9mm_WI_C_ExecuteUbergraph_BP_9mm_WI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


