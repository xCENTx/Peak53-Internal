#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MantleComponent.MantleComponent_C
// (None)

class UClass* UMantleComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MantleComponent_C");

	return Clss;
}


// MantleComponent_C MantleComponent.Default__MantleComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMantleComponent_C* UMantleComponent_C::GetDefaultObj()
{
	static class UMantleComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMantleComponent_C*>(UMantleComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MantleComponent.MantleComponent_C.GetMantleAsset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EALSMantleType          MantleType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EALSOverlayState        CurrentOverlayState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FALSMantleAsset             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FALSMantleAsset UMantleComponent_C::GetMantleAsset(enum class EALSMantleType MantleType, enum class EALSOverlayState CurrentOverlayState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MantleComponent_C", "GetMantleAsset");

	Params::UMantleComponent_C_GetMantleAsset_Params Parms{};

	Parms.MantleType = MantleType;
	Parms.CurrentOverlayState = CurrentOverlayState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


