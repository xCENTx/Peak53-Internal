#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_SaveComplete.BP_SaveComplete_C
// (None)

class UClass* UBP_SaveComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SaveComplete_C");

	return Clss;
}


// BP_SaveComplete_C BP_SaveComplete.Default__BP_SaveComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SaveComplete_C* UBP_SaveComplete_C::GetDefaultObj()
{
	static class UBP_SaveComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SaveComplete_C*>(UBP_SaveComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SaveComplete.BP_SaveComplete_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_SaveComplete_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveComplete_C", "BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SaveComplete.BP_SaveComplete_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveComplete_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveComplete_C", "PreConstruct");

	Params::UBP_SaveComplete_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SaveComplete.BP_SaveComplete_C.ExecuteUbergraph_BP_SaveComplete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SaveComplete_C::ExecuteUbergraph_BP_SaveComplete(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SaveComplete_C", "ExecuteUbergraph_BP_SaveComplete");

	Params::UBP_SaveComplete_C_ExecuteUbergraph_BP_SaveComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


