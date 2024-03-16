#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ControlFunction.BP_ControlFunction_C
// (None)

class UClass* UBP_ControlFunction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ControlFunction_C");

	return Clss;
}


// BP_ControlFunction_C BP_ControlFunction.Default__BP_ControlFunction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ControlFunction_C* UBP_ControlFunction_C::GetDefaultObj()
{
	static class UBP_ControlFunction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ControlFunction_C*>(UBP_ControlFunction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ControlFunction.BP_ControlFunction_C.MapToKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnhancedActionKeyMapping   KeyMapping                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   NewKey                                                           (Parm, OutParm, ContainsInstancedReference)
// struct FEnhancedActionKeyMapping   KeyMappingL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)

void UBP_ControlFunction_C::MapToKey(const struct FEnhancedActionKeyMapping& KeyMapping, const struct FKey& Key, struct FEnhancedActionKeyMapping* NewKey, const struct FEnhancedActionKeyMapping& KeyMappingL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ControlFunction_C", "MapToKey");

	Params::UBP_ControlFunction_C_MapToKey_Params Parms{};

	Parms.KeyMapping = KeyMapping;
	Parms.Key = Key;
	Parms.KeyMappingL = KeyMappingL;

	UObject::ProcessEvent(Func, &Parms);

	if (NewKey != nullptr)
		*NewKey = std::move(Parms.NewKey);

}

}


