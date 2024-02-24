#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bomb_Site.BP_Bomb_Site_C
// (Actor)

class UClass* ABP_Bomb_Site_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bomb_Site_C");

	return Clss;
}


// BP_Bomb_Site_C BP_Bomb_Site.Default__BP_Bomb_Site_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bomb_Site_C* ABP_Bomb_Site_C::GetDefaultObj()
{
	static class ABP_Bomb_Site_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bomb_Site_C*>(ABP_Bomb_Site_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Bomb_Site.BP_Bomb_Site_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Bomb_Site_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bomb_Site_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Bomb_Site.BP_Bomb_Site_C.ExecuteUbergraph_BP_Bomb_Site
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bomb_Site_C::ExecuteUbergraph_BP_Bomb_Site(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bomb_Site_C", "ExecuteUbergraph_BP_Bomb_Site");

	Params::ABP_Bomb_Site_C_ExecuteUbergraph_BP_Bomb_Site_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


