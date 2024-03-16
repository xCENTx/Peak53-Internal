#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_InventoryPanel.BP_InventoryPanel_C
// (None)

class UClass* UBP_InventoryPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InventoryPanel_C");

	return Clss;
}


// BP_InventoryPanel_C BP_InventoryPanel.Default__BP_InventoryPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InventoryPanel_C* UBP_InventoryPanel_C::GetDefaultObj()
{
	static class UBP_InventoryPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InventoryPanel_C*>(UBP_InventoryPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InventoryPanel.BP_InventoryPanel_C.UpdateWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default                                            (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryPanel_C::UpdateWeight(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryPanel_C", "UpdateWeight");

	Params::UBP_InventoryPanel_C_UpdateWeight_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryPanel.BP_InventoryPanel_C.InitializeGridPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            EquipmentList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InventoryGridDetails_FoundGrid                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CustomGridLayoutData     CallFunc_SGK_InventoryGridDetails_InventoryGridData              (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGridInterface_C>K2Node_DynamicCast_AsBP_SGKGrid_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryPanel_C::InitializeGridPanel(class UBP_MasterInventory_C* Inventory, class UCanvasPanelSlot* EquipmentList, double Scale, class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool CallFunc_SGK_InventoryGridDetails_FoundGrid, const struct FS_CustomGridLayoutData& CallFunc_SGK_InventoryGridDetails_InventoryGridData, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UClass* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IBP_SGKGridInterface_C> K2Node_DynamicCast_AsBP_SGKGrid_Interface, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryPanel_C", "InitializeGridPanel");

	Params::UBP_InventoryPanel_C_InitializeGridPanel_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.EquipmentList = EquipmentList;
	Parms.Scale = Scale;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SGK_InventoryGridDetails_FoundGrid = CallFunc_SGK_InventoryGridDetails_FoundGrid;
	Parms.CallFunc_SGK_InventoryGridDetails_InventoryGridData = CallFunc_SGK_InventoryGridDetails_InventoryGridData;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGrid_Interface = K2Node_DynamicCast_AsBP_SGKGrid_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryPanel.BP_InventoryPanel_C.BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_InventoryPanel_C::BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryPanel_C", "BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryPanel.BP_InventoryPanel_C.UpdateWeightEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryPanel_C::UpdateWeightEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryPanel_C", "UpdateWeightEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryPanel.BP_InventoryPanel_C.ExecuteUbergraph_BP_InventoryPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryPanel_C::ExecuteUbergraph_BP_InventoryPanel(int32 EntryPoint, class UPanelWidget* CallFunc_GetParent_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryPanel_C", "ExecuteUbergraph_BP_InventoryPanel");

	Params::UBP_InventoryPanel_C_ExecuteUbergraph_BP_InventoryPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast = CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


