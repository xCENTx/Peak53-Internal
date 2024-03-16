#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKWidgetInterface.BP_SGKWidgetInterface_C
// (None)

class UClass* IBP_SGKWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKWidgetInterface_C");

	return Clss;
}


// BP_SGKWidgetInterface_C BP_SGKWidgetInterface.Default__BP_SGKWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SGKWidgetInterface_C* IBP_SGKWidgetInterface_C::GetDefaultObj()
{
	static class IBP_SGKWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SGKWidgetInterface_C*>(IBP_SGKWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKWidgetInterface.BP_SGKWidgetInterface_C.SGK MenuReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool IBP_SGKWidgetInterface_C::SGK_MenuReference(class UWidget* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKWidgetInterface_C", "SGK MenuReference");

	Params::IBP_SGKWidgetInterface_C_SGK_MenuReference_Params Parms{};

	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKWidgetInterface.BP_SGKWidgetInterface_C.SGK ConnectingScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ServerConnecting_C*      ServerConnecting                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBP_SGKWidgetInterface_C::SGK_ConnectingScreen(class UBP_ServerConnecting_C** ServerConnecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKWidgetInterface_C", "SGK ConnectingScreen");

	Params::IBP_SGKWidgetInterface_C_SGK_ConnectingScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerConnecting != nullptr)
		*ServerConnecting = Parms.ServerConnecting;

}

}


