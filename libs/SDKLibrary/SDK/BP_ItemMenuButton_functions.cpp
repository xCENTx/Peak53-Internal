#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ItemMenuButton.BP_ItemMenuButton_C
// (None)

class UClass* UBP_ItemMenuButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemMenuButton_C");

	return Clss;
}


// BP_ItemMenuButton_C BP_ItemMenuButton.Default__BP_ItemMenuButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ItemMenuButton_C* UBP_ItemMenuButton_C::GetDefaultObj()
{
	static class UBP_ItemMenuButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ItemMenuButton_C*>(UBP_ItemMenuButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.ActionSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_ItemMenuButton_C::ActionSelection(const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemMenuButton_C", "ActionSelection");

	Params::UBP_ItemMenuButton_C_ActionSelection_Params Parms{};

	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InventoryAction          Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_ItemOptionsMenu_C*       RightMouseMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPlayerInv_IsInPlayerInv                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemMenuButton_C::InitializeButton(const struct FS_InventoryAction& Action, const struct FS_InvSlot& InvSlot, class UBP_ItemOptionsMenu_C* RightMouseMenu, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInPlayerInv_IsInPlayerInv)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemMenuButton_C", "InitializeButton");

	Params::UBP_ItemMenuButton_C_InitializeButton_Params Parms{};

	Parms.Action = Action;
	Parms.InvSlot = InvSlot;
	Parms.RightMouseMenu = RightMouseMenu;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsInPlayerInv_IsInPlayerInv = CallFunc_IsInPlayerInv_IsInPlayerInv;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ItemMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemMenuButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ItemMenuButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemMenuButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemMenuButton.BP_ItemMenuButton_C.ExecuteUbergraph_BP_ItemMenuButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemMenuButton_C::ExecuteUbergraph_BP_ItemMenuButton(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemMenuButton_C", "ExecuteUbergraph_BP_ItemMenuButton");

	Params::UBP_ItemMenuButton_C_ExecuteUbergraph_BP_ItemMenuButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


