#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_ingame_loadout_screen.w_ingame_loadout_screen_C
// (None)

class UClass* UW_ingame_loadout_screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_ingame_loadout_screen_C");

	return Clss;
}


// w_ingame_loadout_screen_C w_ingame_loadout_screen.Default__w_ingame_loadout_screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ingame_loadout_screen_C* UW_ingame_loadout_screen_C::GetDefaultObj()
{
	static class UW_ingame_loadout_screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ingame_loadout_screen_C*>(UW_ingame_loadout_screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_ingame_loadout_screen.w_ingame_loadout_screen_C.Get_CurrentTeam_Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UW_ingame_loadout_screen_C::Get_CurrentTeam_Text(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_ingame_loadout_screen_C", "Get_CurrentTeam_Text");

	Params::UW_ingame_loadout_screen_C_Get_CurrentTeam_Text_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_ingame_loadout_screen.w_ingame_loadout_screen_C.UpdateUi
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ingame_loadout_screen_C::UpdateUi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_ingame_loadout_screen_C", "UpdateUi");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_ingame_loadout_screen.w_ingame_loadout_screen_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentEquipment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ingame_loadout_screen_C::CustomEvent(const class FString& CurrentEquipment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_ingame_loadout_screen_C", "CustomEvent");

	Params::UW_ingame_loadout_screen_C_CustomEvent_Params Parms{};

	Parms.CurrentEquipment = CurrentEquipment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_ingame_loadout_screen.w_ingame_loadout_screen_C.ExecuteUbergraph_w_ingame_loadout_screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_loadout_slot_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get              (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USg_lodout_C*                K2Node_DynamicCast_AsSg_Lodout                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_CurrentEquipment                              (ZeroConstructor, HasGetValueTypeHash)

void UW_ingame_loadout_screen_C::ExecuteUbergraph_w_ingame_loadout_screen(int32 EntryPoint, class UW_loadout_slot_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class FString>& CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class USg_lodout_C* K2Node_DynamicCast_AsSg_Lodout, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& K2Node_CustomEvent_CurrentEquipment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_ingame_loadout_screen_C", "ExecuteUbergraph_w_ingame_loadout_screen");

	Params::UW_ingame_loadout_screen_C_ExecuteUbergraph_w_ingame_loadout_screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get = CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsSg_Lodout = K2Node_DynamicCast_AsSg_Lodout;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentEquipment = K2Node_CustomEvent_CurrentEquipment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_ingame_loadout_screen.w_ingame_loadout_screen_C.LoadoutChoosen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Equipment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ingame_loadout_screen_C::LoadoutChoosen__DelegateSignature(const class FString& Equipment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_ingame_loadout_screen_C", "LoadoutChoosen__DelegateSignature");

	Params::UW_ingame_loadout_screen_C_LoadoutChoosen__DelegateSignature_Params Parms{};

	Parms.Equipment = Equipment;

	UObject::ProcessEvent(Func, &Parms);

}

}


