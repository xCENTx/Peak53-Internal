#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C
// (None)

class UClass* UBP_WeaponOptionsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponOptionsMenu_C");

	return Clss;
}


// BP_WeaponOptionsMenu_C BP_WeaponOptionsMenu.Default__BP_WeaponOptionsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeaponOptionsMenu_C* UBP_WeaponOptionsMenu_C::GetDefaultObj()
{
	static class UBP_WeaponOptionsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeaponOptionsMenu_C*>(UBP_WeaponOptionsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.PopulateList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponOptionsMenu_C::PopulateList(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "PopulateList");

	Params::UBP_WeaponOptionsMenu_C_PopulateList_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UBP_WeaponOptionsMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "OnMouseButtonDown");

	Params::UBP_WeaponOptionsMenu_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_WeaponOptionsMenu_C::BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_WeaponOptionsMenu_C::BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_WeaponOptionsMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_WeaponOptionsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeaponOptionsMenu.BP_WeaponOptionsMenu_C.ExecuteUbergraph_BP_WeaponOptionsMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID_1                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponOptionsMenu_C::ExecuteUbergraph_BP_WeaponOptionsMenu(int32 EntryPoint, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeaponOptionsMenu_C", "ExecuteUbergraph_BP_WeaponOptionsMenu");

	Params::UBP_WeaponOptionsMenu_C_ExecuteUbergraph_BP_WeaponOptionsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_S_WeaponSlotID = K2Node_MakeStruct_S_WeaponSlotID;
	Parms.K2Node_MakeStruct_S_WeaponSlotID_1 = K2Node_MakeStruct_S_WeaponSlotID_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


