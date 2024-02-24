#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_INS_Aurora_F.BP_INS_Aurora_F_C
// (Actor, Pawn)

class UClass* ABP_INS_Aurora_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_INS_Aurora_F_C");

	return Clss;
}


// BP_INS_Aurora_F_C BP_INS_Aurora_F.Default__BP_INS_Aurora_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_INS_Aurora_F_C* ABP_INS_Aurora_F_C::GetDefaultObj()
{
	static class ABP_INS_Aurora_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_INS_Aurora_F_C*>(ABP_INS_Aurora_F_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_INS_Aurora_F.BP_INS_Aurora_F_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_INS_Aurora_F_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_INS_Aurora_F_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_INS_Aurora_F.BP_INS_Aurora_F_C.ExecuteUbergraph_BP_INS_Aurora_F
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_INS_Aurora_F_C::ExecuteUbergraph_BP_INS_Aurora_F(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_INS_Aurora_F_C", "ExecuteUbergraph_BP_INS_Aurora_F");

	Params::ABP_INS_Aurora_F_C_ExecuteUbergraph_BP_INS_Aurora_F_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


