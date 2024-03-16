#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_MasterSegment.BP_MasterSegment_C
// (None)

class UClass* UBP_MasterSegment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterSegment_C");

	return Clss;
}


// BP_MasterSegment_C BP_MasterSegment.Default__BP_MasterSegment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MasterSegment_C* UBP_MasterSegment_C::GetDefaultObj()
{
	static class UBP_MasterSegment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MasterSegment_C*>(UBP_MasterSegment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterSegment.BP_MasterSegment_C.IconSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               CallFunc_SGK_BuildPartDetails_BuildPartFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         CallFunc_SGK_BuildPartDetails_BuildPartDetails                   (HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterSegment_C::IconSetup(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails, class UObject* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector2D& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSegment_C", "IconSetup");

	Params::UBP_MasterSegment_C_IconSetup_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartFound = CallFunc_SGK_BuildPartDetails_BuildPartFound;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartDetails = CallFunc_SGK_BuildPartDetails_BuildPartDetails;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSegment.BP_MasterSegment_C.EnableSegment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterSegment_C::EnableSegment(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSegment_C", "EnableSegment");

	Params::UBP_MasterSegment_C_EnableSegment_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSegment.BP_MasterSegment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterSegment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSegment_C", "PreConstruct");

	Params::UBP_MasterSegment_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSegment.BP_MasterSegment_C.SegmentSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterSegment_C::SegmentSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSegment_C", "SegmentSelected");

	Params::UBP_MasterSegment_C_SegmentSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MasterSegment.BP_MasterSegment_C.ExecuteUbergraph_BP_MasterSegment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MasterSegment_C::ExecuteUbergraph_BP_MasterSegment(int32 EntryPoint, bool K2Node_CustomEvent_Selected, bool Temp_bool_IsClosed_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterSegment_C", "ExecuteUbergraph_BP_MasterSegment");

	Params::UBP_MasterSegment_C_ExecuteUbergraph_BP_MasterSegment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


