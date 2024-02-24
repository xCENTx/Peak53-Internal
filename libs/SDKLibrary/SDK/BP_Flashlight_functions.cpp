#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flashlight.BP_Flashlight_C
// (Actor)

class UClass* ABP_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flashlight_C");

	return Clss;
}


// BP_Flashlight_C BP_Flashlight.Default__BP_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Flashlight_C* ABP_Flashlight_C::GetDefaultObj()
{
	static class ABP_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Flashlight_C*>(ABP_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flashlight.BP_Flashlight_C.SGK HoldableMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Flashlight_C::SGK_HoldableMesh(class UPrimitiveComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flashlight_C", "SGK HoldableMesh");

	Params::ABP_Flashlight_C_SGK_HoldableMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BP_Flashlight.BP_Flashlight_C.SGK ServerPrimaryAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyDown                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Flashlight_C::SGK_ServerPrimaryAction(bool KeyDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flashlight_C", "SGK ServerPrimaryAction");

	Params::ABP_Flashlight_C_SGK_ServerPrimaryAction_Params Parms{};

	Parms.KeyDown = KeyDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flashlight.BP_Flashlight_C.ExecuteUbergraph_BP_Flashlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KeyDown                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Flashlight_C::ExecuteUbergraph_BP_Flashlight(int32 EntryPoint, bool K2Node_Event_KeyDown, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flashlight_C", "ExecuteUbergraph_BP_Flashlight");

	Params::ABP_Flashlight_C_ExecuteUbergraph_BP_Flashlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_KeyDown = K2Node_Event_KeyDown;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


