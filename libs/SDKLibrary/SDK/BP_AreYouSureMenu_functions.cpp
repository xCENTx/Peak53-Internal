#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_AreYouSureMenu.BP_AreYouSureMenu_C
// (None)

class UClass* UBP_AreYouSureMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AreYouSureMenu_C");

	return Clss;
}


// BP_AreYouSureMenu_C BP_AreYouSureMenu.Default__BP_AreYouSureMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AreYouSureMenu_C* UBP_AreYouSureMenu_C::GetDefaultObj()
{
	static class UBP_AreYouSureMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AreYouSureMenu_C*>(UBP_AreYouSureMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_AreYouSureMenu_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "BndEvt__YesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_AreYouSureMenu_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AreYouSureMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "PreConstruct");

	Params::UBP_AreYouSureMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.UpdateAreYouSureMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AreYouSureMenu_C::UpdateAreYouSureMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "UpdateAreYouSureMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.ExecuteUbergraph_BP_AreYouSureMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlurStrength_InStrength_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AreYouSureMenu_C::ExecuteUbergraph_BP_AreYouSureMenu(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, float CallFunc_SetBlurStrength_InStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "ExecuteUbergraph_BP_AreYouSureMenu");

	Params::UBP_AreYouSureMenu_C_ExecuteUbergraph_BP_AreYouSureMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetBlurStrength_InStrength_ImplicitCast = CallFunc_SetBlurStrength_InStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.NoSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AreYouSureMenu_C::NoSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "NoSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AreYouSureMenu.BP_AreYouSureMenu_C.YesSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AreYouSureMenu_C::YesSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AreYouSureMenu_C", "YesSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


