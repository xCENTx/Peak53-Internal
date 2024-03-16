#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CharacterEquipment.BP_CharacterEquipment_C
// (None)

class UClass* UBP_CharacterEquipment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterEquipment_C");

	return Clss;
}


// BP_CharacterEquipment_C BP_CharacterEquipment.Default__BP_CharacterEquipment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CharacterEquipment_C* UBP_CharacterEquipment_C::GetDefaultObj()
{
	static class UBP_CharacterEquipment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CharacterEquipment_C*>(UBP_CharacterEquipment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterEquipment.BP_CharacterEquipment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterEquipment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterEquipment_C", "PreConstruct");

	Params::UBP_CharacterEquipment_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharacterEquipment.BP_CharacterEquipment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_CharacterEquipment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterEquipment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterEquipment.BP_CharacterEquipment_C.ExecuteUbergraph_BP_CharacterEquipment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_CharacterEquipment_C::ExecuteUbergraph_BP_CharacterEquipment(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UWidget*>& K2Node_MakeArray_Array, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterEquipment_C", "ExecuteUbergraph_BP_CharacterEquipment");

	Params::UBP_CharacterEquipment_C_ExecuteUbergraph_BP_CharacterEquipment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


