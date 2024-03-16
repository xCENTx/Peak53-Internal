#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BorderedMinimap.BorderedMinimap_C
// (None)

class UClass* UBorderedMinimap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BorderedMinimap_C");

	return Clss;
}


// BorderedMinimap_C BorderedMinimap.Default__BorderedMinimap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderedMinimap_C* UBorderedMinimap_C::GetDefaultObj()
{
	static class UBorderedMinimap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderedMinimap_C*>(UBorderedMinimap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BorderedMinimap.BorderedMinimap_C.InitButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowButtons                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::InitButtons(bool bShowButtons, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "InitButtons");

	Params::UBorderedMinimap_C_InitButtons_Params Parms{};

	Parms.bShowButtons = bShowButtons;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.InitBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::InitBorder(int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "InitBorder");

	Params::UBorderedMinimap_C_InitBorder_Params Parms{};

	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.TickBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewYaw_Yaw                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewYaw_WorldYaw_ImplicitCast                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::TickBorder(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetViewYaw_Yaw, float CallFunc_GetViewYaw_WorldYaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "TickBorder");

	Params::UBorderedMinimap_C_TickBorder_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetViewYaw_Yaw = CallFunc_GetViewYaw_Yaw;
	Parms.CallFunc_GetViewYaw_WorldYaw_ImplicitCast = CallFunc_GetViewYaw_WorldYaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.CopyOptionsToMapWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::CopyOptionsToMapWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "CopyOptionsToMapWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "Tick");

	Params::UBorderedMinimap_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_186_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_186_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_186_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_205_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_205_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_205_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_218_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_233_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_233_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_233_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.TickZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::TickZoom(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "TickZoom");

	Params::UBorderedMinimap_C_TickZoom_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.OnViewChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapViewComponent*           MapViewComp                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::OnViewChanged_Event_0(class UMapViewComponent* MapViewComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "OnViewChanged_Event_0");

	Params::UBorderedMinimap_C_OnViewChanged_Event_0_Params Parms{};

	Parms.MapViewComp = MapViewComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_327_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_327_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_327_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_345_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_345_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomInR_K2Node_ComponentBoundEvent_345_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_364_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_364_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_364_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_384_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBorderedMinimap_C::BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_384_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "BndEvt__Button_ZoomOutR_K2Node_ComponentBoundEvent_384_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BorderedMinimap.BorderedMinimap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "PreConstruct");

	Params::UBorderedMinimap_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BorderedMinimap.BorderedMinimap_C.ExecuteUbergraph_BorderedMinimap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DeltaSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapViewComponent*           K2Node_CustomEvent_MapViewComp                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TickZoom_DeltaSeconds_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBorderedMinimap_C::ExecuteUbergraph_BorderedMinimap(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_CustomEvent_DeltaSeconds, bool Temp_bool_IsClosed_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, class UMapViewComponent* K2Node_CustomEvent_MapViewComp, double CallFunc_TickZoom_DeltaSeconds_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderedMinimap_C", "ExecuteUbergraph_BorderedMinimap");

	Params::UBorderedMinimap_C_ExecuteUbergraph_BorderedMinimap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_DeltaSeconds = K2Node_CustomEvent_DeltaSeconds;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_CustomEvent_MapViewComp = K2Node_CustomEvent_MapViewComp;
	Parms.CallFunc_TickZoom_DeltaSeconds_ImplicitCast = CallFunc_TickZoom_DeltaSeconds_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


