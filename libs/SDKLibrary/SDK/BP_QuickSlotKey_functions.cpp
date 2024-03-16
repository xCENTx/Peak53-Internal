#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_QuickSlotKey.BP_QuickSlotKey_C
// (None)

class UClass* UBP_QuickSlotKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuickSlotKey_C");

	return Clss;
}


// BP_QuickSlotKey_C BP_QuickSlotKey.Default__BP_QuickSlotKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuickSlotKey_C* UBP_QuickSlotKey_C::GetDefaultObj()
{
	static class UBP_QuickSlotKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuickSlotKey_C*>(UBP_QuickSlotKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuickSlotKey.BP_QuickSlotKey_C.SetNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        SlotNumber                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_QuickSlotKey_C::SetNumber(const struct FKey& SlotNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickSlotKey_C", "SetNumber");

	Params::UBP_QuickSlotKey_C_SetNumber_Params Parms{};

	Parms.SlotNumber = SlotNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuickSlotKey.BP_QuickSlotKey_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuickSlotKey_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickSlotKey_C", "PreConstruct");

	Params::UBP_QuickSlotKey_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_QuickSlotKey.BP_QuickSlotKey_C.ExecuteUbergraph_BP_QuickSlotKey
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_SlotNumber                                    (HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_QuickSlotKey_C::ExecuteUbergraph_BP_QuickSlotKey(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FKey& K2Node_CustomEvent_SlotNumber, class FText CallFunc_Key_GetDisplayName_ReturnValue, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickSlotKey_C", "ExecuteUbergraph_BP_QuickSlotKey");

	Params::UBP_QuickSlotKey_C_ExecuteUbergraph_BP_QuickSlotKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_CustomEvent_SlotNumber = K2Node_CustomEvent_SlotNumber;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


