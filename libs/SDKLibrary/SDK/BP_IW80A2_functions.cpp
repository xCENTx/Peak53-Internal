#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IW80A2.BP_IW80A2_C
// (Actor)

class UClass* ABP_IW80A2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IW80A2_C");

	return Clss;
}


// BP_IW80A2_C BP_IW80A2.Default__BP_IW80A2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IW80A2_C* ABP_IW80A2_C::GetDefaultObj()
{
	static class ABP_IW80A2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IW80A2_C*>(ABP_IW80A2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IW80A2.BP_IW80A2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IW80A2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IW80A2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IW80A2.BP_IW80A2_C.ExecuteUbergraph_BP_IW80A2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void ABP_IW80A2_C::ExecuteUbergraph_BP_IW80A2(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IW80A2_C", "ExecuteUbergraph_BP_IW80A2");

	Params::ABP_IW80A2_C_ExecuteUbergraph_BP_IW80A2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


