#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Credits.Credits_C
// (None)

class UClass* UCredits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Credits_C");

	return Clss;
}


// Credits_C Credits.Default__Credits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCredits_C* UCredits_C::GetDefaultObj()
{
	static class UCredits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCredits_C*>(UCredits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Credits.Credits_C.BndEvt__Options-Legal_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCredits_C::BndEvt__OptionsMinusLegal_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Credits_C", "BndEvt__Options-Legal_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Credits.Credits_C.ExecuteUbergraph_Credits
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCredits_C::ExecuteUbergraph_Credits(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Credits_C", "ExecuteUbergraph_Credits");

	Params::UCredits_C_ExecuteUbergraph_Credits_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Credits.Credits_C.OnBackRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCredits_C::OnBackRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Credits_C", "OnBackRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


