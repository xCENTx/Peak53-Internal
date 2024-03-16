#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_MenuButton.BP_MenuButton_C
// (None)

class UClass* UBP_MenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuButton_C");

	return Clss;
}


// BP_MenuButton_C BP_MenuButton.Default__BP_MenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuButton_C* UBP_MenuButton_C::GetDefaultObj()
{
	static class UBP_MenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuButton_C*>(UBP_MenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuButton.BP_MenuButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuButton_C", "PreConstruct");

	Params::UBP_MenuButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuButton.BP_MenuButton_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_MenuButton_C::BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuButton_C", "BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuButton.BP_MenuButton_C.ExecuteUbergraph_BP_MenuButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuButton_C::ExecuteUbergraph_BP_MenuButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuButton_C", "ExecuteUbergraph_BP_MenuButton");

	Params::UBP_MenuButton_C_ExecuteUbergraph_BP_MenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuButton.BP_MenuButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuButton_C::OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuButton_C", "OnClicked__DelegateSignature");

	Params::UBP_MenuButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}

}


