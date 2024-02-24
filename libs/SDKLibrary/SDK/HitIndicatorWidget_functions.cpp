#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HitIndicatorWidget.HitIndicatorWidget_C
// (None)

class UClass* UHitIndicatorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitIndicatorWidget_C");

	return Clss;
}


// HitIndicatorWidget_C HitIndicatorWidget.Default__HitIndicatorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitIndicatorWidget_C* UHitIndicatorWidget_C::GetDefaultObj()
{
	static class UHitIndicatorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitIndicatorWidget_C*>(UHitIndicatorWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitIndicatorWidget.HitIndicatorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHitIndicatorWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitIndicatorWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HitIndicatorWidget.HitIndicatorWidget_C.ExecuteUbergraph_HitIndicatorWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHitIndicatorWidget_C::ExecuteUbergraph_HitIndicatorWidget(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitIndicatorWidget_C", "ExecuteUbergraph_HitIndicatorWidget");

	Params::UHitIndicatorWidget_C_ExecuteUbergraph_HitIndicatorWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


