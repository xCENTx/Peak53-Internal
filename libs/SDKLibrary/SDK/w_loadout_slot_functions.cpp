#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_loadout_slot.w_loadout_slot_C
// (None)

class UClass* UW_loadout_slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_loadout_slot_C");

	return Clss;
}


// w_loadout_slot_C w_loadout_slot.Default__w_loadout_slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_loadout_slot_C* UW_loadout_slot_C::GetDefaultObj()
{
	static class UW_loadout_slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_loadout_slot_C*>(UW_loadout_slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_loadout_slot.w_loadout_slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_loadout_slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "PreConstruct");

	Params::UW_loadout_slot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_loadout_slot.w_loadout_slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.ShowCurrentLodout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::ShowCurrentLodout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "ShowCurrentLodout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.BndEvt__w_loadout_slot_Loadout_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::BndEvt__w_loadout_slot_Loadout_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "BndEvt__w_loadout_slot_Loadout_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.BndEvt__w_loadout_slot_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::BndEvt__w_loadout_slot_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "BndEvt__w_loadout_slot_Delete_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "BndEvt__W_MenuButton_Button_21_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.ExecuteUbergraph_w_loadout_slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USg_lodout_C*                K2Node_DynamicCast_AsSg_Lodout                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquipmentCharacter_C*    CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_loadout_slot_C::ExecuteUbergraph_w_loadout_slot(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class ABP_EquipmentCharacter_C* CallFunc_GetActorOfClass_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_EquipmentCharacter_C* CallFunc_GetActorOfClass_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "ExecuteUbergraph_w_loadout_slot");

	Params::UW_loadout_slot_C_ExecuteUbergraph_w_loadout_slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsSg_Lodout = K2Node_DynamicCast_AsSg_Lodout;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_loadout_slot.w_loadout_slot_C.OnButtonPressedGetLoadout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentEquipment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_loadout_slot_C::OnButtonPressedGetLoadout__DelegateSignature(const class FString& CurrentEquipment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "OnButtonPressedGetLoadout__DelegateSignature");

	Params::UW_loadout_slot_C_OnButtonPressedGetLoadout__DelegateSignature_Params Parms{};

	Parms.CurrentEquipment = CurrentEquipment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_loadout_slot.w_loadout_slot_C.Buttonunhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::Buttonunhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "Buttonunhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_loadout_slot.w_loadout_slot_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_loadout_slot_C::ButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_loadout_slot_C", "ButtonHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


