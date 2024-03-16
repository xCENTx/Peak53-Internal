#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Loading.WB_Loading_C
// (None)

class UClass* UWB_Loading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Loading_C");

	return Clss;
}


// WB_Loading_C WB_Loading.Default__WB_Loading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Loading_C* UWB_Loading_C::GetDefaultObj()
{
	static class UWB_Loading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Loading_C*>(UWB_Loading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Loading.WB_Loading_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Loading_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Loading_C", "PreConstruct");

	Params::UWB_Loading_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Loading.WB_Loading_C.ExecuteUbergraph_WB_Loading
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColorByType_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetGlobalColorByType_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Loading_C::ExecuteUbergraph_WB_Loading(int32 EntryPoint, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_GetGlobalColorByType_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Loading_C", "ExecuteUbergraph_WB_Loading");

	Params::UWB_Loading_C_ExecuteUbergraph_WB_Loading_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGlobalColorByType_ReturnValue = CallFunc_GetGlobalColorByType_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGlobalColorByType_ReturnValue_1 = CallFunc_GetGlobalColorByType_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


