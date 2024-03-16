#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MetalRoof.BP_MetalRoof_C
// (Actor)

class UClass* ABP_MetalRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MetalRoof_C");

	return Clss;
}


// BP_MetalRoof_C BP_MetalRoof.Default__BP_MetalRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MetalRoof_C* ABP_MetalRoof_C::GetDefaultObj()
{
	static class ABP_MetalRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MetalRoof_C*>(ABP_MetalRoof_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MetalRoof.BP_MetalRoof_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MetalRoof_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalRoof_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MetalRoof.BP_MetalRoof_C.ExecuteUbergraph_BP_MetalRoof
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MetalRoof_C::ExecuteUbergraph_BP_MetalRoof(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MetalRoof_C", "ExecuteUbergraph_BP_MetalRoof");

	Params::ABP_MetalRoof_C_ExecuteUbergraph_BP_MetalRoof_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


