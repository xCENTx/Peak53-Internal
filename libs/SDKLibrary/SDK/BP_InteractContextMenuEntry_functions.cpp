#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C
// (None)

class UClass* UBP_InteractContextMenuEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractContextMenuEntry_C");

	return Clss;
}


// BP_InteractContextMenuEntry_C BP_InteractContextMenuEntry.Default__BP_InteractContextMenuEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractContextMenuEntry_C* UBP_InteractContextMenuEntry_C::GetDefaultObj()
{
	static class UBP_InteractContextMenuEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractContextMenuEntry_C*>(UBP_InteractContextMenuEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.EntrySelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::EntrySelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractContextMenuEntry_C", "EntrySelected");

	Params::UBP_InteractContextMenuEntry_C_EntrySelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_PossibleActions_ActionsFound                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WorldAction>      CallFunc_SGK_PossibleActions_PossibleActions                     (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::UpdateText(TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_PossibleActions_ActionsFound, TArray<struct FS_WorldAction>& CallFunc_SGK_PossibleActions_PossibleActions, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractContextMenuEntry_C", "UpdateText");

	Params::UBP_InteractContextMenuEntry_C_UpdateText_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_PossibleActions_ActionsFound = CallFunc_SGK_PossibleActions_ActionsFound;
	Parms.CallFunc_SGK_PossibleActions_PossibleActions = CallFunc_SGK_PossibleActions_PossibleActions;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.InitializeEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WorldAction              Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EquipmentSlotFreeL                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::InitializeEntry(const struct FS_WorldAction& Action, class AActor* Actor, int32 Index, bool EquipmentSlotFreeL, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractContextMenuEntry_C", "InitializeEntry");

	Params::UBP_InteractContextMenuEntry_C_InitializeEntry_Params Parms{};

	Parms.Action = Action;
	Parms.Actor = Actor;
	Parms.Index = Index;
	Parms.EquipmentSlotFreeL = EquipmentSlotFreeL;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractContextMenuEntry_C", "PreConstruct");

	Params::UBP_InteractContextMenuEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C.ExecuteUbergraph_BP_InteractContextMenuEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractContextMenuEntry_C::ExecuteUbergraph_BP_InteractContextMenuEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractContextMenuEntry_C", "ExecuteUbergraph_BP_InteractContextMenuEntry");

	Params::UBP_InteractContextMenuEntry_C_ExecuteUbergraph_BP_InteractContextMenuEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


