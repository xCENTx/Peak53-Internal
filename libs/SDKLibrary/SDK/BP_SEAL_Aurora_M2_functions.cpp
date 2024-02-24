#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SEAL_Aurora_M2.BP_SEAL_Aurora_M2_C
// (Actor, Pawn)

class UClass* ABP_SEAL_Aurora_M2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SEAL_Aurora_M2_C");

	return Clss;
}


// BP_SEAL_Aurora_M2_C BP_SEAL_Aurora_M2.Default__BP_SEAL_Aurora_M2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SEAL_Aurora_M2_C* ABP_SEAL_Aurora_M2_C::GetDefaultObj()
{
	static class ABP_SEAL_Aurora_M2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SEAL_Aurora_M2_C*>(ABP_SEAL_Aurora_M2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SEAL_Aurora_M2.BP_SEAL_Aurora_M2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SEAL_Aurora_M2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SEAL_Aurora_M2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SEAL_Aurora_M2.BP_SEAL_Aurora_M2_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SEAL_Aurora_M2_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SEAL_Aurora_M2_C", "ReceiveActorBeginOverlap");

	Params::ABP_SEAL_Aurora_M2_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SEAL_Aurora_M2.BP_SEAL_Aurora_M2_C.ExecuteUbergraph_BP_SEAL_Aurora_M2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SEAL_Aurora_M2_C::ExecuteUbergraph_BP_SEAL_Aurora_M2(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SEAL_Aurora_M2_C", "ExecuteUbergraph_BP_SEAL_Aurora_M2");

	Params::ABP_SEAL_Aurora_M2_C_ExecuteUbergraph_BP_SEAL_Aurora_M2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


