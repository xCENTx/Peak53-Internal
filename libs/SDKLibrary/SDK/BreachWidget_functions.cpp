#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BreachWidget.BreachWidget_C
// (None)

class UClass* UBreachWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BreachWidget_C");

	return Clss;
}


// BreachWidget_C BreachWidget.Default__BreachWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBreachWidget_C* UBreachWidget_C::GetDefaultObj()
{
	static class UBreachWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBreachWidget_C*>(UBreachWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BreachWidget.BreachWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBreachWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BreachWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreachWidget.BreachWidget_C.WidgetAutoRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBreachWidget_C::WidgetAutoRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BreachWidget_C", "WidgetAutoRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BreachWidget.BreachWidget_C.ExecuteUbergraph_BreachWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBreachWidget_C::ExecuteUbergraph_BreachWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BreachWidget_C", "ExecuteUbergraph_BreachWidget");

	Params::UBreachWidget_C_ExecuteUbergraph_BreachWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


