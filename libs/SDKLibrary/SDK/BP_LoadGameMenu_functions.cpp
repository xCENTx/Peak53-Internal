#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_LoadGameMenu.BP_LoadGameMenu_C
// (None)

class UClass* UBP_LoadGameMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LoadGameMenu_C");

	return Clss;
}


// BP_LoadGameMenu_C BP_LoadGameMenu.Default__BP_LoadGameMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LoadGameMenu_C* UBP_LoadGameMenu_C::GetDefaultObj()
{
	static class UBP_LoadGameMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LoadGameMenu_C*>(UBP_LoadGameMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LoadGameMenu.BP_LoadGameMenu_C.PopulateSaveGameList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SaveMetaData             SaveMetaDataL                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UBP_LoadGameMenuPanel_C*     NewSaveGamePanelL                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NoSaves_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_SaveMetaData             CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGameMetaData_C*   K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadGameMenuPanel_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadGameMenu_C::PopulateSaveGameList(const struct FS_SaveMetaData& SaveMetaDataL, class UBP_LoadGameMenuPanel_C* NewSaveGamePanelL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UBP_NoSaves_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FS_SaveMetaData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UBP_SGKSaveGameMetaData_C* K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UBP_LoadGameMenuPanel_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadGameMenu_C", "PopulateSaveGameList");

	Params::UBP_LoadGameMenu_C_PopulateSaveGameList_Params Parms{};

	Parms.SaveMetaDataL = SaveMetaDataL;
	Parms.NewSaveGamePanelL = NewSaveGamePanelL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data = K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadGameMenu.BP_LoadGameMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadGameMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadGameMenu_C", "PreConstruct");

	Params::UBP_LoadGameMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadGameMenu.BP_LoadGameMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_LoadGameMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadGameMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LoadGameMenu.BP_LoadGameMenu_C.BndEvt__BP_MenuButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class E_WidgetToggleType      WidgetToggleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadGameMenu_C::BndEvt__BP_MenuButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(enum class E_WidgetToggleType WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadGameMenu_C", "BndEvt__BP_MenuButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UBP_LoadGameMenu_C_BndEvt__BP_MenuButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.WidgetToggleType = WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoadGameMenu.BP_LoadGameMenu_C.ExecuteUbergraph_BP_LoadGameMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterMenuPanel_C*       K2Node_DynamicCast_AsBP_Master_Menu_Panel                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WidgetToggleType      K2Node_ComponentBoundEvent_WidgetToggleType                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_LoadGameMenu_C::ExecuteUbergraph_BP_LoadGameMenu(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanOR_ReturnValue, class UBP_MasterMenuPanel_C* K2Node_DynamicCast_AsBP_Master_Menu_Panel, bool K2Node_DynamicCast_bSuccess, enum class E_WidgetToggleType K2Node_ComponentBoundEvent_WidgetToggleType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoadGameMenu_C", "ExecuteUbergraph_BP_LoadGameMenu");

	Params::UBP_LoadGameMenu_C_ExecuteUbergraph_BP_LoadGameMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Menu_Panel = K2Node_DynamicCast_AsBP_Master_Menu_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_WidgetToggleType = K2Node_ComponentBoundEvent_WidgetToggleType;

	UObject::ProcessEvent(Func, &Parms);

}

}


