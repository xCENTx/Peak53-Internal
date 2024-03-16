#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_SinglePlayerMenu.BP_SinglePlayerMenu_C
// (None)

class UClass* UBP_SinglePlayerMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SinglePlayerMenu_C");

	return Clss;
}


// BP_SinglePlayerMenu_C BP_SinglePlayerMenu.Default__BP_SinglePlayerMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SinglePlayerMenu_C* UBP_SinglePlayerMenu_C::GetDefaultObj()
{
	static class UBP_SinglePlayerMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SinglePlayerMenu_C*>(UBP_SinglePlayerMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SinglePlayerMenu.BP_SinglePlayerMenu_C.BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SinglePlayerMenu_C::BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SinglePlayerMenu_C", "BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UBP_SinglePlayerMenu_C_BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SinglePlayerMenu.BP_SinglePlayerMenu_C.BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_149_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SinglePlayerMenu_C::BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_149_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SinglePlayerMenu_C", "BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_149_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UBP_SinglePlayerMenu_C_BndEvt__BP_SinglePlayerMenu_BP_WidgetToggleButton_149_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SinglePlayerMenu.BP_SinglePlayerMenu_C.BindOnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SinglePlayerMenu_C::BindOnClicked(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SinglePlayerMenu_C", "BindOnClicked");

	Params::UBP_SinglePlayerMenu_C_BindOnClicked_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SinglePlayerMenu.BP_SinglePlayerMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_SinglePlayerMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SinglePlayerMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SinglePlayerMenu.BP_SinglePlayerMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SinglePlayerMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SinglePlayerMenu_C", "PreConstruct");

	Params::UBP_SinglePlayerMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SinglePlayerMenu.BP_SinglePlayerMenu_C.ExecuteUbergraph_BP_SinglePlayerMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetToggleType      K2Node_ComponentBoundEvent_WidgetToggleType                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetToggleType      K2Node_ComponentBoundEvent_WidgetToggleType_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetToggleType      K2Node_CustomEvent_WidgetToggleType                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SinglePlayerMenu_C::ExecuteUbergraph_BP_SinglePlayerMenu(int32 EntryPoint, enum class E_WidgetToggleType K2Node_ComponentBoundEvent_WidgetToggleType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_WidgetToggleType K2Node_ComponentBoundEvent_WidgetToggleType_1, enum class E_WidgetToggleType K2Node_CustomEvent_WidgetToggleType, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SinglePlayerMenu_C", "ExecuteUbergraph_BP_SinglePlayerMenu");

	Params::UBP_SinglePlayerMenu_C_ExecuteUbergraph_BP_SinglePlayerMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_WidgetToggleType = K2Node_ComponentBoundEvent_WidgetToggleType;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_WidgetToggleType_1 = K2Node_ComponentBoundEvent_WidgetToggleType_1;
	Parms.K2Node_CustomEvent_WidgetToggleType = K2Node_CustomEvent_WidgetToggleType;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


