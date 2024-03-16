#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ButtonPanel.BP_ButtonPanel_C
// (None)

class UClass* UBP_ButtonPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ButtonPanel_C");

	return Clss;
}


// BP_ButtonPanel_C BP_ButtonPanel.Default__BP_ButtonPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ButtonPanel_C* UBP_ButtonPanel_C::GetDefaultObj()
{
	static class UBP_ButtonPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ButtonPanel_C*>(UBP_ButtonPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ButtonPanel.BP_ButtonPanel_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ButtonPanel_C::BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButtonPanel_C", "BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButtonPanel.BP_ButtonPanel_C.BndEvt__GearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ButtonPanel_C::BndEvt__GearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButtonPanel_C", "BndEvt__GearButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ButtonPanel.BP_ButtonPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ButtonPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButtonPanel_C", "PreConstruct");

	Params::UBP_ButtonPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ButtonPanel.BP_ButtonPanel_C.ExecuteUbergraph_BP_ButtonPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ButtonPanel_C::ExecuteUbergraph_BP_ButtonPanel(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ButtonPanel_C", "ExecuteUbergraph_BP_ButtonPanel");

	Params::UBP_ButtonPanel_C_ExecuteUbergraph_BP_ButtonPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


