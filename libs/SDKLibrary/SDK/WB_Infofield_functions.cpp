#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Infofield.WB_Infofield_C
// (None)

class UClass* UWB_Infofield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Infofield_C");

	return Clss;
}


// WB_Infofield_C WB_Infofield.Default__WB_Infofield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Infofield_C* UWB_Infofield_C::GetDefaultObj()
{
	static class UWB_Infofield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Infofield_C*>(UWB_Infofield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Infofield.WB_Infofield_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Infofield_C::SetInfo(class FText Head, class FText Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Infofield_C", "SetInfo");

	Params::UWB_Infofield_C_SetInfo_Params Parms{};

	Parms.Head = Head;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Infofield.WB_Infofield_C.ExecuteUbergraph_WB_Infofield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Head                                          (None)
// class FText                        K2Node_CustomEvent_Body                                          (None)

void UWB_Infofield_C::ExecuteUbergraph_WB_Infofield(int32 EntryPoint, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Infofield_C", "ExecuteUbergraph_WB_Infofield");

	Params::UWB_Infofield_C_ExecuteUbergraph_WB_Infofield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Head = K2Node_CustomEvent_Head;
	Parms.K2Node_CustomEvent_Body = K2Node_CustomEvent_Body;

	UObject::ProcessEvent(Func, &Parms);

}

}


