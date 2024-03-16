#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HitMarker.HitMarker_C
// (None)

class UClass* UHitMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitMarker_C");

	return Clss;
}


// HitMarker_C HitMarker.Default__HitMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitMarker_C* UHitMarker_C::GetDefaultObj()
{
	static class UHitMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitMarker_C*>(UHitMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitMarker.HitMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHitMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitMarker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HitMarker.HitMarker_C.ExecuteUbergraph_HitMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHitMarker_C::ExecuteUbergraph_HitMarker(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitMarker_C", "ExecuteUbergraph_HitMarker");

	Params::UHitMarker_C_ExecuteUbergraph_HitMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


