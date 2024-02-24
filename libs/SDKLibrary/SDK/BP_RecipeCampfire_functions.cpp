#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RecipeCampfire.BP_RecipeCampfire_C
// (Actor)

class UClass* ABP_RecipeCampfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RecipeCampfire_C");

	return Clss;
}


// BP_RecipeCampfire_C BP_RecipeCampfire.Default__BP_RecipeCampfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RecipeCampfire_C* ABP_RecipeCampfire_C::GetDefaultObj()
{
	static class ABP_RecipeCampfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RecipeCampfire_C*>(ABP_RecipeCampfire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.MulticastTurnedOnEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnedOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RecipeCampfire_C::MulticastTurnedOnEffect(bool TurnedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeCampfire_C", "MulticastTurnedOnEffect");

	Params::ABP_RecipeCampfire_C_MulticastTurnedOnEffect_Params Parms{};

	Parms.TurnedOn = TurnedOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.SGK TurnedOnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnedOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RecipeCampfire_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeCampfire_C", "SGK TurnedOnEffect");

	Params::ABP_RecipeCampfire_C_SGK_TurnedOnEffect_Params Parms{};

	Parms.TurnedOn = TurnedOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_RecipeCampfire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeCampfire_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_RecipeCampfire.BP_RecipeCampfire_C.ExecuteUbergraph_BP_RecipeCampfire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_TurnedOn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_TurnedOn                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RecipeCampfire_C::ExecuteUbergraph_BP_RecipeCampfire(int32 EntryPoint, bool K2Node_CustomEvent_TurnedOn, bool K2Node_Event_TurnedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RecipeCampfire_C", "ExecuteUbergraph_BP_RecipeCampfire");

	Params::ABP_RecipeCampfire_C_ExecuteUbergraph_BP_RecipeCampfire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TurnedOn = K2Node_CustomEvent_TurnedOn;
	Parms.K2Node_Event_TurnedOn = K2Node_Event_TurnedOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


