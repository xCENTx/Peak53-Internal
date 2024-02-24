#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_RepairActor.BP_RepairActor_C
// (None)

class UClass* UBP_RepairActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RepairActor_C");

	return Clss;
}


// BP_RepairActor_C BP_RepairActor.Default__BP_RepairActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RepairActor_C* UBP_RepairActor_C::GetDefaultObj()
{
	static class UBP_RepairActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RepairActor_C*>(UBP_RepairActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RepairActor.BP_RepairActor_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Actor_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RepairActor_C::Initialize(class FText Actor_Name, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RepairActor_C", "Initialize");

	Params::UBP_RepairActor_C_Initialize_Params Parms{};

	Parms.Actor_Name = Actor_Name;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


