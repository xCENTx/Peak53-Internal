#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TG1224.BP_TG1224_C
// (Actor)

class UClass* ABP_TG1224_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TG1224_C");

	return Clss;
}


// BP_TG1224_C BP_TG1224.Default__BP_TG1224_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TG1224_C* ABP_TG1224_C::GetDefaultObj()
{
	static class ABP_TG1224_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TG1224_C*>(ABP_TG1224_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TG1224.BP_TG1224_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TG1224_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TG1224_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TG1224.BP_TG1224_C.ExecuteUbergraph_BP_TG1224
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

void ABP_TG1224_C::ExecuteUbergraph_BP_TG1224(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TG1224_C", "ExecuteUbergraph_BP_TG1224");

	Params::ABP_TG1224_C_ExecuteUbergraph_BP_TG1224_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


