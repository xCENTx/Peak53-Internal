#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Settings.W_Settings_C
// (None)

class UClass* UW_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Settings_C");

	return Clss;
}


// W_Settings_C W_Settings.Default__W_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Settings_C* UW_Settings_C::GetDefaultObj()
{
	static class UW_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Settings_C*>(UW_Settings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Settings.W_Settings_C.SGK ConnectingScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ServerConnecting_C*      ServerConnecting                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::SGK_ConnectingScreen(class UBP_ServerConnecting_C** ServerConnecting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "SGK ConnectingScreen");

	Params::UW_Settings_C_SGK_ConnectingScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerConnecting != nullptr)
		*ServerConnecting = Parms.ServerConnecting;

}


// Function W_Settings.W_Settings_C.SGK MenuReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_Settings_C::SGK_MenuReference(class UWidget* Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "SGK MenuReference");

	Params::UW_Settings_C_SGK_MenuReference_Params Parms{};

	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Settings.W_Settings_C.LoadAudioSaveVolumes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SGKSettingsSaveData_C*   SaveL                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSettingsSaveData_C*   CallFunc_SGK_Options_Save_Settings                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::LoadAudioSaveVolumes(class UBP_SGKSettingsSaveData_C* SaveL, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, class UBP_SGKSettingsSaveData_C* CallFunc_SGK_Options_Save_Settings, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "LoadAudioSaveVolumes");

	Params::UW_Settings_C_LoadAudioSaveVolumes_Params Parms{};

	Parms.SaveL = SaveL;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_Options_Save_Settings = CallFunc_SGK_Options_Save_Settings;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.CreateKeybindWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputMappingContext*        MappingContextL                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   KeyMappingL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<class UInputAction*>        ActionsAddedL                                                    (Edit, BlueprintVisible)
// int32                              ArrayIndexL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Keybind_C*               ControlWidgetL                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UInputMappingContext*, int32>CallFunc_GetMappingContexts_ReturnValue                          (ConstParm)
// TArray<class UInputMappingContext*>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputMappingContext*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Keybind_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::CreateKeybindWidgets(class UInputMappingContext* MappingContextL, const struct FEnhancedActionKeyMapping& KeyMappingL, const TArray<class UInputAction*>& ActionsAddedL, int32 ArrayIndexL, class UBP_Keybind_C* ControlWidgetL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, TMap<class UInputMappingContext*, int32> CallFunc_GetMappingContexts_ReturnValue, TArray<class UInputMappingContext*>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_Contains_ReturnValue, class UInputMappingContext* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_Keybind_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "CreateKeybindWidgets");

	Params::UW_Settings_C_CreateKeybindWidgets_Params Parms{};

	Parms.MappingContextL = MappingContextL;
	Parms.KeyMappingL = KeyMappingL;
	Parms.ActionsAddedL = ActionsAddedL;
	Parms.ArrayIndexL = ArrayIndexL;
	Parms.ControlWidgetL = ControlWidgetL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetMappingContexts_ReturnValue = CallFunc_GetMappingContexts_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.Get_SelectedCatagoryTitle_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_Settings_C::Get_SelectedCatagoryTitle_Text(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "Get_SelectedCatagoryTitle_Text");

	Params::UW_Settings_C_Get_SelectedCatagoryTitle_Text_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Settings.W_Settings_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Settings_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Settings.W_Settings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "PreConstruct");

	Params::UW_Settings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_MenuList_Lobby_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Settings_C::BndEvt__W_MenuList_Lobby_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_MenuList_Lobby_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_W_MenuButton_1_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Settings_C::BndEvt__W_Settings_W_MenuButton_1_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_W_MenuButton_1_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Audio_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Settings_C::BndEvt__W_Settings_Audio_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Audio_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Video_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Settings_C::BndEvt__W_Settings_Video_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Video_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_SpinBox_1_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_SpinBox_1_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_SpinBox_1_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_SpinBox_1_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Effects_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_Effects_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Effects_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_Effects_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Microphone_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_Microphone_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Microphone_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_Microphone_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_SpinBox_3_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_SpinBox_3_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_SpinBox_3_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_SpinBox_3_K2Node_ComponentBoundEvent_7_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Voice_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_Voice_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Voice_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_Voice_K2Node_ComponentBoundEvent_9_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Weapon_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_Weapon_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Weapon_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_Weapon_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Slider_300_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_Slider_300_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Slider_300_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_Slider_300_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Disconnect_K2Node_ComponentBoundEvent_15_ButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Settings_C::BndEvt__W_Settings_Disconnect_K2Node_ComponentBoundEvent_15_ButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Disconnect_K2Node_ComponentBoundEvent_15_ButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Settings.W_Settings_C.BndEvt__W_Settings_Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::BndEvt__W_Settings_Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "BndEvt__W_Settings_Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_Settings_C_BndEvt__W_Settings_Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Settings.W_Settings_C.ExecuteUbergraph_W_Settings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_VideoOptionsComboBox_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SGKController_C*         K2Node_DynamicCast_AsBP_SGKController                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_3DMenuPawn_C>K2Node_DynamicCast_AsBPI_3DMenu_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetVolume_Volume_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetVolume_Volume_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetVolume_Volume_ImplicitCast_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetVolume_Volume_ImplicitCast_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetVolume_Volume_ImplicitCast_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetVolume_Volume_ImplicitCast_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetMouseSense_MouseSense_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SGK_SetAimedSense_AimedSense_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Settings_C::ExecuteUbergraph_W_Settings(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_InValue_5, float K2Node_ComponentBoundEvent_InValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3, bool K2Node_DynamicCast_bSuccess_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, float K2Node_ComponentBoundEvent_InValue_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_7, float K2Node_ComponentBoundEvent_InValue_2, float K2Node_ComponentBoundEvent_InValue_1, float K2Node_ComponentBoundEvent_InValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_10, float K2Node_ComponentBoundEvent_Value_1, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UW_VideoOptionsComboBox_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_11, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, TScriptInterface<class IBPI_3DMenuPawn_C> K2Node_DynamicCast_AsBPI_3DMenu_Pawn, bool K2Node_DynamicCast_bSuccess_12, float K2Node_ComponentBoundEvent_Value, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_9, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8, bool K2Node_DynamicCast_bSuccess_13, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9, bool K2Node_DynamicCast_bSuccess_14, double CallFunc_SGK_SetVolume_Volume_ImplicitCast, double CallFunc_SGK_SetVolume_Volume_ImplicitCast_1, double CallFunc_SGK_SetVolume_Volume_ImplicitCast_2, double CallFunc_SGK_SetVolume_Volume_ImplicitCast_3, double CallFunc_SGK_SetVolume_Volume_ImplicitCast_4, double CallFunc_SGK_SetVolume_Volume_ImplicitCast_5, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1, double CallFunc_SGK_SetMouseSense_MouseSense_ImplicitCast, double CallFunc_SGK_SetAimedSense_AimedSense_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Settings_C", "ExecuteUbergraph_W_Settings");

	Params::UW_Settings_C_ExecuteUbergraph_W_Settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_InValue_5 = K2Node_ComponentBoundEvent_InValue_5;
	Parms.K2Node_ComponentBoundEvent_InValue_4 = K2Node_ComponentBoundEvent_InValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_InValue_3 = K2Node_ComponentBoundEvent_InValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue_1 = CallFunc_GetCurrentLevelName_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKController = K2Node_DynamicCast_AsBP_SGKController;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_3DMenu_Pawn = K2Node_DynamicCast_AsBPI_3DMenu_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetGameInstance_ReturnValue_9 = CallFunc_GetGameInstance_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9 = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_SGK_SetVolume_Volume_ImplicitCast = CallFunc_SGK_SetVolume_Volume_ImplicitCast;
	Parms.CallFunc_SGK_SetVolume_Volume_ImplicitCast_1 = CallFunc_SGK_SetVolume_Volume_ImplicitCast_1;
	Parms.CallFunc_SGK_SetVolume_Volume_ImplicitCast_2 = CallFunc_SGK_SetVolume_Volume_ImplicitCast_2;
	Parms.CallFunc_SGK_SetVolume_Volume_ImplicitCast_3 = CallFunc_SGK_SetVolume_Volume_ImplicitCast_3;
	Parms.CallFunc_SGK_SetVolume_Volume_ImplicitCast_4 = CallFunc_SGK_SetVolume_Volume_ImplicitCast_4;
	Parms.CallFunc_SGK_SetVolume_Volume_ImplicitCast_5 = CallFunc_SGK_SetVolume_Volume_ImplicitCast_5;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;
	Parms.CallFunc_SGK_SetMouseSense_MouseSense_ImplicitCast = CallFunc_SGK_SetMouseSense_MouseSense_ImplicitCast;
	Parms.CallFunc_SGK_SetAimedSense_AimedSense_ImplicitCast = CallFunc_SGK_SetAimedSense_AimedSense_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


