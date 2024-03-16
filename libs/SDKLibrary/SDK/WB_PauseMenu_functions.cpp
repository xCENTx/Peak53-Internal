#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PauseMenu.WB_PauseMenu_C
// (None)

class UClass* UWB_PauseMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PauseMenu_C");

	return Clss;
}


// WB_PauseMenu_C WB_PauseMenu.Default__WB_PauseMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PauseMenu_C* UWB_PauseMenu_C::GetDefaultObj()
{
	static class UWB_PauseMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PauseMenu_C*>(UWB_PauseMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PauseMenu.WB_PauseMenu_C.Anim_FadeButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::Anim_FadeButtons(double PlaybackSpeed, bool Forward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "Anim_FadeButtons");

	Params::UWB_PauseMenu_C_Anim_FadeButtons_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Forward = Forward;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.Anim_FadeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlaybackSpeed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::Anim_FadeContent(double PlaybackSpeed, bool Forward, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "Anim_FadeContent");

	Params::UWB_PauseMenu_C_Anim_FadeContent_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.Forward = Forward;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.CreateChildWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ChildClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 OnDeactivated                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWB_Container_Base_C* UWB_PauseMenu_C::CreateChildWidget(class UClass* Container, class UClass* ChildClass, FDelegateProperty_& OnDeactivated, class UWB_Container_Base_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "CreateChildWidget");

	Params::UWB_PauseMenu_C_CreateChildWidget_Params Parms{};

	Parms.Container = Container;
	Parms.ChildClass = ChildClass;
	Parms.OnDeactivated = OnDeactivated;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetTabSwitcherIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::SetTabSwitcherIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "SetTabSwitcherIndex");

	Params::UWB_PauseMenu_C_SetTabSwitcherIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.SetGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     FocusObject                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::SetGamepadFocus(class UWidget* FocusObject, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "SetGamepadFocus");

	Params::UWB_PauseMenu_C_SetGamepadFocus_Params Parms{};

	Parms.FocusObject = FocusObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.IsTopLevelWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                 InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_PauseMenu_C::IsTopLevelWidget(class UUserWidget* InWidget, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "IsTopLevelWidget");

	Params::UWB_PauseMenu_C_IsTopLevelWidget_Params Parms{};

	Parms.InWidget = InWidget;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKeyEvent                   Key                                                              (Edit, BlueprintVisible)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_1                                 (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue_2                                 (None)

struct FEventReply UWB_PauseMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKeyEvent& Key, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnPreviewKeyDown");

	Params::UWB_PauseMenu_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Key = Key;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue_1 = CallFunc_Unhandled_ReturnValue_1;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue_2 = CallFunc_Unhandled_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PauseMenu.WB_PauseMenu_C.GetDesiredFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CustomFocusTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Text_Button_C*           FocusTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Text_Button_C*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UCommonButtonBase* UWB_PauseMenu_C::GetDesiredFocusTarget(bool CustomFocusTarget, class UWB_Text_Button_C* FocusTarget, bool Temp_bool_Variable, class UWB_Text_Button_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "GetDesiredFocusTarget");

	Params::UWB_PauseMenu_C_GetDesiredFocusTarget_Params Parms{};

	Parms.CustomFocusTarget = CustomFocusTarget;
	Parms.FocusTarget = FocusTarget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_PauseMenu.WB_PauseMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_1_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_2_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_ActionText_4_K2Node_ComponentBoundEvent_4_CommonSelectedStateChangedBase__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_CommonActionWidget_127_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Audio_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Controls_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Credits_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_General_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Video_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnGamepad_QuitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnGamepad_QuitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnGamepad_QuitGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_MainMenu_Button_Settings_Input_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.RefreshInputMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::RefreshInputMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "RefreshInputMethod");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_PauseMenu_Button_Resume_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature");

	Params::UWB_PauseMenu_C_BndEvt__WB_PauseMenu_Button_Exit_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.ClickResume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::ClickResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "ClickResume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.Quit_Reaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::Quit_Reaction(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "Quit_Reaction");

	Params::UWB_PauseMenu_C_Quit_Reaction_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnwGeneralSettingsDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnwGeneralSettingsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnwGeneralSettingsDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnInputSettingsDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnInputSettingsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnInputSettingsDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnVideoSettingsDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnVideoSettingsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnVideoSettingsDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnAudioSettingsDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnAudioSettingsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnAudioSettingsDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnCreditsDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnCreditsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnCreditsDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnControlSettingsDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnControlSettingsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnControlSettingsDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnFadeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnFadeCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnFadeCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Confirmed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::CustomEvent(bool Confirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "CustomEvent");

	Params::UWB_PauseMenu_C_CustomEvent_Params Parms{};

	Parms.Confirmed = Confirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PauseMenu.WB_PauseMenu_C.OnFadeCompleted_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PauseMenu_C::OnFadeCompleted_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "OnFadeCompleted_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PauseMenu.WB_PauseMenu_C.ExecuteUbergraph_WB_PauseMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_CreateChildWidget_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Settings_C*    K2Node_DynamicCast_AsWB_Container_Settings                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_CreateChildWidget_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Default_C*     K2Node_DynamicCast_AsWB_Container_Default                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Request_C*               CallFunc_CreateRequest_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_3                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_CreateChildWidget_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Settings_C*    K2Node_DynamicCast_AsWB_Container_Settings_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_4                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_5                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_CreateChildWidget_ReturnValue_3                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Settings_C*    K2Node_DynamicCast_AsWB_Container_Settings_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_6                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_CreateChildWidget_ReturnValue_4                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Settings_C*    K2Node_DynamicCast_AsWB_Container_Settings_3                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_7                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           CallFunc_GetDesiredFocusTarget_ReturnValue_8                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Base_C*        CallFunc_CreateChildWidget_ReturnValue_5                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_Container_Settings_C*    K2Node_DynamicCast_AsWB_Container_Settings_4                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Confirmed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWB_Request_C*               CallFunc_CreateRequest_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PauseMenu_C::ExecuteUbergraph_WB_PauseMenu(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_1, class UWB_Container_Default_C* K2Node_DynamicCast_AsWB_Container_Default, bool K2Node_DynamicCast_bSuccess_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, bool K2Node_ComponentBoundEvent_Selected_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, bool K2Node_ComponentBoundEvent_Selected_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, bool K2Node_ComponentBoundEvent_Selected_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, bool K2Node_ComponentBoundEvent_Selected, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_Confirmed_1, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_2, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_1, bool K2Node_DynamicCast_bSuccess_2, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_5, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_3, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_2, bool K2Node_DynamicCast_bSuccess_3, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_4, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_3, bool K2Node_DynamicCast_bSuccess_4, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_7, class UCommonButtonBase* CallFunc_GetDesiredFocusTarget_ReturnValue_8, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UWB_Container_Base_C* CallFunc_CreateChildWidget_ReturnValue_5, class UWB_Container_Settings_C* K2Node_DynamicCast_AsWB_Container_Settings_4, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_Confirmed, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UWB_Request_C* CallFunc_CreateRequest_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PauseMenu_C", "ExecuteUbergraph_WB_PauseMenu");

	Params::UWB_PauseMenu_C_ExecuteUbergraph_WB_PauseMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateChildWidget_ReturnValue = CallFunc_CreateChildWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Container_Settings = K2Node_DynamicCast_AsWB_Container_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreateChildWidget_ReturnValue_1 = CallFunc_CreateChildWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWB_Container_Default = K2Node_DynamicCast_AsWB_Container_Default;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Selected_3 = K2Node_ComponentBoundEvent_Selected_3;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Selected_2 = K2Node_ComponentBoundEvent_Selected_2;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Selected_1 = K2Node_ComponentBoundEvent_Selected_1;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_1 = CallFunc_GetDesiredFocusTarget_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_CreateRequest_ReturnValue = CallFunc_CreateRequest_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_2 = CallFunc_GetDesiredFocusTarget_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Confirmed_1 = K2Node_CustomEvent_Confirmed_1;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_3 = CallFunc_GetDesiredFocusTarget_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_CreateChildWidget_ReturnValue_2 = CallFunc_CreateChildWidget_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWB_Container_Settings_1 = K2Node_DynamicCast_AsWB_Container_Settings_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_4 = CallFunc_GetDesiredFocusTarget_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_5 = CallFunc_GetDesiredFocusTarget_ReturnValue_5;
	Parms.CallFunc_CreateChildWidget_ReturnValue_3 = CallFunc_CreateChildWidget_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsWB_Container_Settings_2 = K2Node_DynamicCast_AsWB_Container_Settings_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_6 = CallFunc_GetDesiredFocusTarget_ReturnValue_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_CreateChildWidget_ReturnValue_4 = CallFunc_CreateChildWidget_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsWB_Container_Settings_3 = K2Node_DynamicCast_AsWB_Container_Settings_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_7 = CallFunc_GetDesiredFocusTarget_ReturnValue_7;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_8 = CallFunc_GetDesiredFocusTarget_ReturnValue_8;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_CreateChildWidget_ReturnValue_5 = CallFunc_CreateChildWidget_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsWB_Container_Settings_4 = K2Node_DynamicCast_AsWB_Container_Settings_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_Confirmed = K2Node_CustomEvent_Confirmed;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_CreateRequest_ReturnValue_1 = CallFunc_CreateRequest_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


