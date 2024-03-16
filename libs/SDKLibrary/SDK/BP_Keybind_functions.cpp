#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_Keybind.BP_Keybind_C
// (None)

class UClass* UBP_Keybind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Keybind_C");

	return Clss;
}


// BP_Keybind_C BP_Keybind.Default__BP_Keybind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Keybind_C* UBP_Keybind_C::GetDefaultObj()
{
	static class UBP_Keybind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Keybind_C*>(UBP_Keybind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Keybind.BP_Keybind_C.Find Action Keys
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ActionKeys                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FEnhancedActionKeyMapping>ActionKeysL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Keybind_C::Find_Action_Keys(TArray<struct FEnhancedActionKeyMapping>* ActionKeys, const TArray<struct FEnhancedActionKeyMapping>& ActionKeysL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "Find Action Keys");

	Params::UBP_Keybind_C_Find_Action_Keys_Params Parms{};

	Parms.ActionKeysL = ActionKeysL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionKeys != nullptr)
		*ActionKeys = std::move(Parms.ActionKeys);

}


// Function BP_Keybind.BP_Keybind_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// float                              CallFunc_PointerEvent_GetWheelDelta_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UBP_Keybind_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "OnMouseWheel");

	Params::UBP_Keybind_C_OnMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Keybind.BP_Keybind_C.InitializeKeybind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAxis                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputMappingContext*        Mapping                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>AxisMappingsL                                                    (Edit, BlueprintVisible)
// TArray<struct FInputActionKeyMapping>ActionMappingsL                                                  (Edit, BlueprintVisible)
// TArray<struct FEnhancedActionKeyMapping>CallFunc_Find_Action_Keys_ActionKeys                             (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// TArray<struct FEnhancedActionKeyMapping>CallFunc_Find_Action_Keys_ActionKeys_1                           (ReferenceParm, ContainsInstancedReference)
// struct FEnhancedActionKeyMapping   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UBP_Keybind_C::InitializeKeybind(class FName BindName, bool IsAxis, class UInputAction* Action, class UInputMappingContext* Mapping, const TArray<struct FInputAxisKeyMapping>& AxisMappingsL, const TArray<struct FInputActionKeyMapping>& ActionMappingsL, TArray<struct FEnhancedActionKeyMapping>& CallFunc_Find_Action_Keys_ActionKeys, bool CallFunc_IsValid_ReturnValue, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInputChord& K2Node_MakeStruct_InputChord, TArray<struct FEnhancedActionKeyMapping>& CallFunc_Find_Action_Keys_ActionKeys_1, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord_1, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "InitializeKeybind");

	Params::UBP_Keybind_C_InitializeKeybind_Params Parms{};

	Parms.BindName = BindName;
	Parms.IsAxis = IsAxis;
	Parms.Action = Action;
	Parms.Mapping = Mapping;
	Parms.AxisMappingsL = AxisMappingsL;
	Parms.ActionMappingsL = ActionMappingsL;
	Parms.CallFunc_Find_Action_Keys_ActionKeys = CallFunc_Find_Action_Keys_ActionKeys;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.CallFunc_Find_Action_Keys_ActionKeys_1 = CallFunc_Find_Action_Keys_ActionKeys_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.FindAxisBind
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionBindName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BindIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BindFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        ActionBind                                                       (Parm, OutParm)
// TArray<struct FInputAxisKeyMapping>MappingsL                                                        (Edit, BlueprintVisible)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item                                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Keybind_C::FindAxisBind(class FName ActionBindName, int32 BindIndex, bool* BindFound, struct FInputAxisKeyMapping* ActionBind, const TArray<struct FInputAxisKeyMapping>& MappingsL, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "FindAxisBind");

	Params::UBP_Keybind_C_FindAxisBind_Params Parms{};

	Parms.ActionBindName = ActionBindName;
	Parms.BindIndex = BindIndex;
	Parms.MappingsL = MappingsL;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BindFound != nullptr)
		*BindFound = Parms.BindFound;

	if (ActionBind != nullptr)
		*ActionBind = std::move(Parms.ActionBind);

}


// Function BP_Keybind.BP_Keybind_C.FindActionBind
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionBindName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BindIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               BindFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      ActionBind                                                       (Parm, OutParm)
// TArray<struct FInputActionKeyMapping>MappingsL                                                        (Edit, BlueprintVisible)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Keybind_C::FindActionBind(class FName ActionBindName, int32 BindIndex, bool* BindFound, struct FInputActionKeyMapping* ActionBind, const TArray<struct FInputActionKeyMapping>& MappingsL, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "FindActionBind");

	Params::UBP_Keybind_C_FindActionBind_Params Parms{};

	Parms.ActionBindName = ActionBindName;
	Parms.BindIndex = BindIndex;
	Parms.MappingsL = MappingsL;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BindFound != nullptr)
		*BindFound = Parms.BindFound;

	if (ActionBind != nullptr)
		*ActionBind = std::move(Parms.ActionBind);

}


// Function BP_Keybind.BP_Keybind_C.RebindAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              RebindIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   KeyTempL                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Keybind_C::RebindAction(struct FInputChord& Key, int32 RebindIndex, const struct FEnhancedActionKeyMapping& KeyTempL, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "RebindAction");

	Params::UBP_Keybind_C_RebindAction_Params Parms{};

	Parms.Key = Key;
	Parms.RebindIndex = RebindIndex;
	Parms.KeyTempL = KeyTempL;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.RebindAxis
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                 Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              RebindIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        K2Node_MakeStruct_InputAxisKeyMapping                            (None)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxisKeyMapping>CallFunc_GetAxisMappingByName_OutMappings                        (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAxisKeyMapping        CallFunc_Array_Get_Item                                          (None)

void UBP_Keybind_C::RebindAxis(struct FInputChord& Key, int32 RebindIndex, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputAxisKeyMapping& K2Node_MakeStruct_InputAxisKeyMapping, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, TArray<struct FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInputAxisKeyMapping& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "RebindAxis");

	Params::UBP_Keybind_C_RebindAxis_Params Parms{};

	Parms.Key = Key;
	Parms.RebindIndex = RebindIndex;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.K2Node_MakeStruct_InputAxisKeyMapping = K2Node_MakeStruct_InputAxisKeyMapping;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.CallFunc_GetAxisMappingByName_OutMappings = CallFunc_GetAxisMappingByName_OutMappings;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.KeySelect1Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Up                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Keybind_C::KeySelect1Scroll(bool Up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "KeySelect1Scroll");

	Params::UBP_Keybind_C_KeySelect1Scroll_Params Parms{};

	Parms.Up = Up;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.KeySelect2Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Up                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Keybind_C::KeySelect2Scroll(bool Up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "KeySelect2Scroll");

	Params::UBP_Keybind_C_KeySelect2Scroll_Params Parms{};

	Parms.Up = Up;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_Keybind_C::BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "BndEvt__KeySelector2_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_Keybind_C::BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "BndEvt__KeySelector1_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_Keybind_C::BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");

	Params::UBP_Keybind_C_BndEvt__KeySelector2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_Keybind_C::BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");

	Params::UBP_Keybind_C_BndEvt__KeySelector1_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Keybind.BP_Keybind_C.ExecuteUbergraph_BP_Keybind
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Up_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Up                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_1                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_2                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_MakeStruct_InputChord_3                                   (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey_1                         (HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey                           (HasGetValueTypeHash)

void UBP_Keybind_C::ExecuteUbergraph_BP_Keybind(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_CustomEvent_Up_1, bool K2Node_CustomEvent_Up, const struct FInputChord& K2Node_MakeStruct_InputChord, const struct FInputChord& K2Node_MakeStruct_InputChord_1, const struct FInputChord& K2Node_MakeStruct_InputChord_2, const struct FInputChord& K2Node_MakeStruct_InputChord_3, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey_1, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Keybind_C", "ExecuteUbergraph_BP_Keybind");

	Params::UBP_Keybind_C_ExecuteUbergraph_BP_Keybind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_Up_1 = K2Node_CustomEvent_Up_1;
	Parms.K2Node_CustomEvent_Up = K2Node_CustomEvent_Up;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;
	Parms.K2Node_MakeStruct_InputChord_1 = K2Node_MakeStruct_InputChord_1;
	Parms.K2Node_MakeStruct_InputChord_2 = K2Node_MakeStruct_InputChord_2;
	Parms.K2Node_MakeStruct_InputChord_3 = K2Node_MakeStruct_InputChord_3;
	Parms.K2Node_ComponentBoundEvent_SelectedKey_1 = K2Node_ComponentBoundEvent_SelectedKey_1;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = K2Node_ComponentBoundEvent_SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}

}


