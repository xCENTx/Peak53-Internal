#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_development_tools.w_development_tools_C
// (None)

class UClass* UW_development_tools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_development_tools_C");

	return Clss;
}


// w_development_tools_C w_development_tools.Default__w_development_tools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_development_tools_C* UW_development_tools_C::GetDefaultObj()
{
	static class UW_development_tools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_development_tools_C*>(UW_development_tools_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_development_tools.w_development_tools_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_development_tools_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_development_tools_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_development_tools.w_development_tools_C.BndEvt__w_development_tools_Button_48_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_development_tools_C::BndEvt__w_development_tools_Button_48_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_development_tools_C", "BndEvt__w_development_tools_Button_48_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_development_tools.w_development_tools_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_development_tools_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_development_tools_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_development_tools.w_development_tools_C.ExecuteUbergraph_w_development_tools
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameManager_C*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_development_tools_C::ExecuteUbergraph_w_development_tools(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, class AGameManager_C* CallFunc_GetActorOfClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_development_tools_C", "ExecuteUbergraph_w_development_tools");

	Params::UW_development_tools_C_ExecuteUbergraph_w_development_tools_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


