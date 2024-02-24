#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_MultiplayerMenu.BP_MultiplayerMenu_C
// (None)

class UClass* UBP_MultiplayerMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiplayerMenu_C");

	return Clss;
}


// BP_MultiplayerMenu_C BP_MultiplayerMenu.Default__BP_MultiplayerMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiplayerMenu_C* UBP_MultiplayerMenu_C::GetDefaultObj()
{
	static class UBP_MultiplayerMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiplayerMenu_C*>(UBP_MultiplayerMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.BindOnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiplayerMenu_C::BindOnClicked(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiplayerMenu_C", "BindOnClicked");

	Params::UBP_MultiplayerMenu_C_BindOnClicked_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_MultiplayerMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiplayerMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiplayerMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiplayerMenu_C", "PreConstruct");

	Params::UBP_MultiplayerMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MultiplayerMenu.BP_MultiplayerMenu_C.ExecuteUbergraph_BP_MultiplayerMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetToggleType      K2Node_CustomEvent_WidgetToggleType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiplayerMenu_C::ExecuteUbergraph_BP_MultiplayerMenu(int32 EntryPoint, enum class E_WidgetToggleType K2Node_CustomEvent_WidgetToggleType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiplayerMenu_C", "ExecuteUbergraph_BP_MultiplayerMenu");

	Params::UBP_MultiplayerMenu_C_ExecuteUbergraph_BP_MultiplayerMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_WidgetToggleType = K2Node_CustomEvent_WidgetToggleType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


