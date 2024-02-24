#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneRoof.BP_StoneRoof_C
// (Actor)

class UClass* ABP_StoneRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneRoof_C");

	return Clss;
}


// BP_StoneRoof_C BP_StoneRoof.Default__BP_StoneRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneRoof_C* ABP_StoneRoof_C::GetDefaultObj()
{
	static class ABP_StoneRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneRoof_C*>(ABP_StoneRoof_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneRoof.BP_StoneRoof_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneRoof_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneRoof_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneRoof.BP_StoneRoof_C.ExecuteUbergraph_BP_StoneRoof
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneRoof_C::ExecuteUbergraph_BP_StoneRoof(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneRoof_C", "ExecuteUbergraph_BP_StoneRoof");

	Params::ABP_StoneRoof_C_ExecuteUbergraph_BP_StoneRoof_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


