#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_HoveredEventWidget.BP_HoveredEventWidget_C
// (None)

class UClass* UBP_HoveredEventWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HoveredEventWidget_C");

	return Clss;
}


// BP_HoveredEventWidget_C BP_HoveredEventWidget.Default__BP_HoveredEventWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HoveredEventWidget_C* UBP_HoveredEventWidget_C::GetDefaultObj()
{
	static class UBP_HoveredEventWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HoveredEventWidget_C*>(UBP_HoveredEventWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HoveredEventWidget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HoveredEventWidget_C", "OnMouseLeave");

	Params::UBP_HoveredEventWidget_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_HoveredEventWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HoveredEventWidget_C", "OnMouseEnter");

	Params::UBP_HoveredEventWidget_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.ExecuteUbergraph_BP_HoveredEventWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UBP_HoveredEventWidget_C::ExecuteUbergraph_BP_HoveredEventWidget(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HoveredEventWidget_C", "ExecuteUbergraph_BP_HoveredEventWidget");

	Params::UBP_HoveredEventWidget_C_ExecuteUbergraph_BP_HoveredEventWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.MouseLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HoveredEventWidget_C::MouseLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HoveredEventWidget_C", "MouseLeft__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HoveredEventWidget.BP_HoveredEventWidget_C.MouseEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HoveredEventWidget_C::MouseEntered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HoveredEventWidget_C", "MouseEntered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


