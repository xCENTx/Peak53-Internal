#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Child_Base.WB_Child_Base_C
// (None)

class UClass* UWB_Child_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Child_Base_C");

	return Clss;
}


// WB_Child_Base_C WB_Child_Base.Default__WB_Child_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Child_Base_C* UWB_Child_Base_C::GetDefaultObj()
{
	static class UWB_Child_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Child_Base_C*>(UWB_Child_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Child_Base.WB_Child_Base_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_Base_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_Base_C", "OnInputMethodChanged");

	Params::UWB_Child_Base_C_OnInputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_Base.WB_Child_Base_C.OnApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_Base_C::OnApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_Base_C", "OnApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_Base.WB_Child_Base_C.OnResetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_Base_C::OnResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_Base_C", "OnResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_Base.WB_Child_Base_C.ExecuteUbergraph_WB_Child_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Child_Base_C::ExecuteUbergraph_WB_Child_Base(int32 EntryPoint, bool K2Node_Event_bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_Base_C", "ExecuteUbergraph_WB_Child_Base");

	Params::UWB_Child_Base_C_ExecuteUbergraph_WB_Child_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Child_Base.WB_Child_Base_C.OnSettingsUnchanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_Base_C::OnSettingsUnchanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_Base_C", "OnSettingsUnchanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Child_Base.WB_Child_Base_C.OnSettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Child_Base_C::OnSettingsChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Child_Base_C", "OnSettingsChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


