#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodRoof.BP_WoodRoof_C
// (Actor)

class UClass* ABP_WoodRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodRoof_C");

	return Clss;
}


// BP_WoodRoof_C BP_WoodRoof.Default__BP_WoodRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodRoof_C* ABP_WoodRoof_C::GetDefaultObj()
{
	static class ABP_WoodRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodRoof_C*>(ABP_WoodRoof_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodRoof.BP_WoodRoof_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_WoodRoof_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodRoof_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WoodRoof.BP_WoodRoof_C.ExecuteUbergraph_BP_WoodRoof
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodRoof_C::ExecuteUbergraph_BP_WoodRoof(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodRoof_C", "ExecuteUbergraph_BP_WoodRoof");

	Params::ABP_WoodRoof_C_ExecuteUbergraph_BP_WoodRoof_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


