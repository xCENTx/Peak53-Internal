#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPIndicator.W_VOIPIndicator_C
// (None)

class UClass* UW_VOIPIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPIndicator_C");

	return Clss;
}


// W_VOIPIndicator_C W_VOIPIndicator.Default__W_VOIPIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPIndicator_C* UW_VOIPIndicator_C::GetDefaultObj()
{
	static class UW_VOIPIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPIndicator_C*>(UW_VOIPIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPIndicator.W_VOIPIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VOIPIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPIndicator.W_VOIPIndicator_C.RefreshUsername
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_VOIPIndicator_C::RefreshUsername()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPIndicator_C", "RefreshUsername");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPIndicator.W_VOIPIndicator_C.ExecuteUbergraph_W_VOIPIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_VOIPInterface_C>K2Node_DynamicCast_AsBP_VOIPInterface                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MSG_AVP_GetPlayerUsername_Success_                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MSG_AVP_GetPlayerUsername_Username                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPIndicator_C::ExecuteUbergraph_W_VOIPIndicator(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_VOIPInterface_C> K2Node_DynamicCast_AsBP_VOIPInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MSG_AVP_GetPlayerUsername_Success_, class FText CallFunc_MSG_AVP_GetPlayerUsername_Username, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPIndicator_C", "ExecuteUbergraph_W_VOIPIndicator");

	Params::UW_VOIPIndicator_C_ExecuteUbergraph_W_VOIPIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_VOIPInterface = K2Node_DynamicCast_AsBP_VOIPInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MSG_AVP_GetPlayerUsername_Success_ = CallFunc_MSG_AVP_GetPlayerUsername_Success_;
	Parms.CallFunc_MSG_AVP_GetPlayerUsername_Username = CallFunc_MSG_AVP_GetPlayerUsername_Username;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


