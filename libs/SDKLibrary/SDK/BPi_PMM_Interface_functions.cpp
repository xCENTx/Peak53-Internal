#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPi_PMM_Interface.BPi_PMM_Interface_C
// (None)

class UClass* IBPi_PMM_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPi_PMM_Interface_C");

	return Clss;
}


// BPi_PMM_Interface_C BPi_PMM_Interface.Default__BPi_PMM_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPi_PMM_Interface_C* IBPi_PMM_Interface_C::GetDefaultObj()
{
	static class IBPi_PMM_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPi_PMM_Interface_C*>(IBPi_PMM_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPi_PMM_Interface.BPi_PMM_Interface_C.OnResetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPi_PMM_Interface_C::OnResetDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_PMM_Interface_C", "OnResetDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPi_PMM_Interface.BPi_PMM_Interface_C.OnApplyChanges
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPi_PMM_Interface_C::OnApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_PMM_Interface_C", "OnApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPi_PMM_Interface.BPi_PMM_Interface_C.OnInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_PMM_Interface_C::OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPi_PMM_Interface_C", "OnInputMethodChanged");

	Params::IBPi_PMM_Interface_C_OnInputMethodChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}


