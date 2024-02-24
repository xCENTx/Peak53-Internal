#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodChest.BP_WoodChest_C
// (Actor)

class UClass* ABP_WoodChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodChest_C");

	return Clss;
}


// BP_WoodChest_C BP_WoodChest.Default__BP_WoodChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodChest_C* ABP_WoodChest_C::GetDefaultObj()
{
	static class ABP_WoodChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodChest_C*>(ABP_WoodChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WoodChest.BP_WoodChest_C.SGK EndInteraction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_EndInteraction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_WoodChest_C::SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_SGK_EndInteraction_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodChest_C", "SGK EndInteraction");

	Params::ABP_WoodChest_C_SGK_EndInteraction_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.CallFunc_SGK_EndInteraction_ReturnValue = CallFunc_SGK_EndInteraction_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WoodChest.BP_WoodChest_C.SGK TurnedOnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TurnedOn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodChest_C::SGK_TurnedOnEffect(bool TurnedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodChest_C", "SGK TurnedOnEffect");

	Params::ABP_WoodChest_C_SGK_TurnedOnEffect_Params Parms{};

	Parms.TurnedOn = TurnedOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WoodChest.BP_WoodChest_C.ExecuteUbergraph_BP_WoodChest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_TurnedOn                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoodChest_C::ExecuteUbergraph_BP_WoodChest(int32 EntryPoint, bool K2Node_Event_TurnedOn, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WoodChest_C", "ExecuteUbergraph_BP_WoodChest");

	Params::ABP_WoodChest_C_ExecuteUbergraph_BP_WoodChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TurnedOn = K2Node_Event_TurnedOn;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


