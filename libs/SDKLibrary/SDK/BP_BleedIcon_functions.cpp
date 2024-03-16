#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_BleedIcon.BP_BleedIcon_C
// (None)

class UClass* UBP_BleedIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BleedIcon_C");

	return Clss;
}


// BP_BleedIcon_C BP_BleedIcon.Default__BP_BleedIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BleedIcon_C* UBP_BleedIcon_C::GetDefaultObj()
{
	static class UBP_BleedIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BleedIcon_C*>(UBP_BleedIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BleedIcon.BP_BleedIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BleedIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BleedIcon_C", "PreConstruct");

	Params::UBP_BleedIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BleedIcon.BP_BleedIcon_C.ExecuteUbergraph_BP_BleedIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BleedIcon_C::ExecuteUbergraph_BP_BleedIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BleedIcon_C", "ExecuteUbergraph_BP_BleedIcon");

	Params::UBP_BleedIcon_C_ExecuteUbergraph_BP_BleedIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


