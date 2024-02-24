#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Container_Base.WB_Container_Base_C
// (None)

class UClass* UWB_Container_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Container_Base_C");

	return Clss;
}


// WB_Container_Base_C WB_Container_Base.Default__WB_Container_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Container_Base_C* UWB_Container_Base_C::GetDefaultObj()
{
	static class UWB_Container_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Container_Base_C*>(UWB_Container_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Container_Base.WB_Container_Base_C.OnDeactivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Base_C::OnDeactivated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Base_C", "OnDeactivated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


