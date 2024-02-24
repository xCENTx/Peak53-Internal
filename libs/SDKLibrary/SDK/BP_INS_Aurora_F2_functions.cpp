#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INS_Aurora_F2.BP_INS_Aurora_F2_C
// (Actor, Pawn)

class UClass* ABP_INS_Aurora_F2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INS_Aurora_F2_C");

	return Clss;
}


// BP_INS_Aurora_F2_C BP_INS_Aurora_F2.Default__BP_INS_Aurora_F2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INS_Aurora_F2_C* ABP_INS_Aurora_F2_C::GetDefaultObj()
{
	static class ABP_INS_Aurora_F2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INS_Aurora_F2_C*>(ABP_INS_Aurora_F2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_INS_Aurora_F2.BP_INS_Aurora_F2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_INS_Aurora_F2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_INS_Aurora_F2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_INS_Aurora_F2.BP_INS_Aurora_F2_C.ExecuteUbergraph_BP_INS_Aurora_F2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_INS_Aurora_F2_C::ExecuteUbergraph_BP_INS_Aurora_F2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_INS_Aurora_F2_C", "ExecuteUbergraph_BP_INS_Aurora_F2");

	Params::ABP_INS_Aurora_F2_C_ExecuteUbergraph_BP_INS_Aurora_F2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


