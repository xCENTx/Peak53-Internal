#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimapInternal_Icon.MinimapInternal_Icon_C
// (None)

class UClass* UMinimapInternal_Icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapInternal_Icon_C");

	return Clss;
}


// MinimapInternal_Icon_C MinimapInternal_Icon.Default__MinimapInternal_Icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapInternal_Icon_C* UMinimapInternal_Icon_C::GetDefaultObj()
{
	static class UMinimapInternal_Icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapInternal_Icon_C*>(UMinimapInternal_Icon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.SetupBoxSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnableBoxSelect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                BoxSelectColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::SetupBoxSelect(bool bEnableBoxSelect, const struct FLinearColor& BoxSelectColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "SetupBoxSelect");

	Params::UMinimapInternal_Icon_C_SetupBoxSelect_Params Parms{};

	Parms.bEnableBoxSelect = bEnableBoxSelect;
	Parms.BoxSelectColor = BoxSelectColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.InitSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::InitSlots(class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "InitSlots");

	Params::UMinimapInternal_Icon_C_InitSlots_Params Parms{};

	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot_2 = K2Node_DynamicCast_AsCanvas_Panel_Slot_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateOuterCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                ParentCanvas                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIconFogInteraction     CallFunc_GetIconFogInteraction_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateOuterCanvas(class UCanvasPanel* ParentCanvas, bool CallFunc_IsValid_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, enum class EIconFogInteraction CallFunc_GetIconFogInteraction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCanvasPanel* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateOuterCanvas");

	Params::UMinimapInternal_Icon_C_UpdateOuterCanvas_Params Parms{};

	Parms.ParentCanvas = ParentCanvas;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIconFogInteraction_ReturnValue = CallFunc_GetIconFogInteraction_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetIconTooltipText_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UMinimapInternal_Icon_C::UpdateTooltip(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetIconTooltipText_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateTooltip");

	Params::UMinimapInternal_Icon_C_UpdateTooltip_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIconTooltipText_ReturnValue = CallFunc_GetIconTooltipText_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.SetTooltipShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMinimapInternal_Tooltip_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::SetTooltipShown(bool bNewShown, bool CallFunc_IsValid_ReturnValue, class UMinimapInternal_Tooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "SetTooltipShown");

	Params::UMinimapInternal_Icon_C_SetTooltipShown_Params Parms{};

	Parms.bNewShown = bNewShown;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnIconClicked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UMinimapInternal_Icon_C::OnIconClicked(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnIconClicked");

	Params::UMinimapInternal_Icon_C_OnIconClicked_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateInteractability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIconInteractable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateInteractability(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsIconInteractable_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateInteractability");

	Params::UMinimapInternal_Icon_C_UpdateInteractability_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsIconInteractable_ReturnValue = CallFunc_IsIconInteractable_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          ArrowMaterialUMG                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          IconMaterialUMG                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetObjectiveArrowMaterialForUMG_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetIconMaterialForUMG_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateMaterial(class UMaterialInterface* ArrowMaterialUMG, class UMaterialInterface* IconMaterialUMG, double CallFunc_GetGameTimeInSeconds_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetObjectiveArrowMaterialForUMG_ReturnValue, class UMaterialInterface* CallFunc_GetIconMaterialForUMG_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateMaterial");

	Params::UMinimapInternal_Icon_C_UpdateMaterial_Params Parms{};

	Parms.ArrowMaterialUMG = ArrowMaterialUMG;
	Parms.IconMaterialUMG = IconMaterialUMG;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectiveArrowMaterialForUMG_ReturnValue = CallFunc_GetObjectiveArrowMaterialForUMG_ReturnValue;
	Parms.CallFunc_GetIconMaterialForUMG_ReturnValue = CallFunc_GetIconMaterialForUMG_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateAppearance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateAppearance(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateAppearance");

	Params::UMinimapInternal_Icon_C_UpdateAppearance_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIconVisible_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsIconVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateVisibility");

	Params::UMinimapInternal_Icon_C_UpdateVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsIconVisible_ReturnValue = CallFunc_IsIconVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.TickIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSameLevel                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    MatInst                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     IconWorldLocation                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIconFogInteraction     FogInteraction                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHiddenInFog                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   RenderUV                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RenderYaw                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRendered                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAtEdge                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInView                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   UV                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIconCategoryVisible_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSameBackgroundLevel_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIconFogInteraction     CallFunc_GetIconFogInteraction_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetIconFogRevealThreshold_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapTrackerComponent*        CallFunc_GetMapTracker_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFogRevealedFactor_bIsInsideFogVolume                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFogRevealedFactor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EIconFogInteraction>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DetectIsInView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_DegAtan2_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewYaw_Yaw                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesObjectiveArrowRotate_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesIconRotate_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectiveArrowEnabled_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ClampIntoView_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MarkRenderedInView_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewCoordinates_U                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewCoordinates_V                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetViewCoordinates_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIconVisible_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampIntoView_OuterRadiusUV_ImplicitCast                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RenderYaw_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::TickIcon(bool IsSameLevel, class UMaterialInstanceDynamic* MatInst, const struct FVector& IconWorldLocation, enum class EIconFogInteraction FogInteraction, bool IsHiddenInFog, const struct FVector2D& RenderUV, double RenderYaw, bool IsRendered, bool IsAtEdge, bool IsInView, const struct FVector2D& UV, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsIconCategoryVisible_ReturnValue, bool CallFunc_IsSameBackgroundLevel_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EIconFogInteraction CallFunc_GetIconFogInteraction_ReturnValue, float CallFunc_GetIconFogRevealThreshold_ReturnValue, class UMapTrackerComponent* CallFunc_GetMapTracker_ReturnValue, bool CallFunc_GetFogRevealedFactor_bIsInsideFogVolume, float CallFunc_GetFogRevealedFactor_ReturnValue, TArray<enum class EIconFogInteraction>& K2Node_MakeArray_Array, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_DetectIsInView_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, class UMaterialInstanceDynamic* K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, double CallFunc_DegAtan2_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetViewYaw_Yaw, bool CallFunc_DoesObjectiveArrowRotate_ReturnValue, bool CallFunc_DoesIconRotate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_IsObjectiveArrowEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_6, const struct FVector2D& CallFunc_ClampIntoView_ReturnValue, bool CallFunc_MarkRenderedInView_ReturnValue, float CallFunc_GetViewCoordinates_U, float CallFunc_GetViewCoordinates_V, bool CallFunc_GetViewCoordinates_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_IsIconVisible_ReturnValue, float CallFunc_ClampIntoView_OuterRadiusUV_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, double K2Node_VariableSet_RenderYaw_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "TickIcon");

	Params::UMinimapInternal_Icon_C_TickIcon_Params Parms{};

	Parms.IsSameLevel = IsSameLevel;
	Parms.MatInst = MatInst;
	Parms.IconWorldLocation = IconWorldLocation;
	Parms.FogInteraction = FogInteraction;
	Parms.IsHiddenInFog = IsHiddenInFog;
	Parms.RenderUV = RenderUV;
	Parms.RenderYaw = RenderYaw;
	Parms.IsRendered = IsRendered;
	Parms.IsAtEdge = IsAtEdge;
	Parms.IsInView = IsInView;
	Parms.UV = UV;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsIconCategoryVisible_ReturnValue = CallFunc_IsIconCategoryVisible_ReturnValue;
	Parms.CallFunc_IsSameBackgroundLevel_ReturnValue = CallFunc_IsSameBackgroundLevel_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIconFogInteraction_ReturnValue = CallFunc_GetIconFogInteraction_ReturnValue;
	Parms.CallFunc_GetIconFogRevealThreshold_ReturnValue = CallFunc_GetIconFogRevealThreshold_ReturnValue;
	Parms.CallFunc_GetMapTracker_ReturnValue = CallFunc_GetMapTracker_ReturnValue;
	Parms.CallFunc_GetFogRevealedFactor_bIsInsideFogVolume = CallFunc_GetFogRevealedFactor_bIsInsideFogVolume;
	Parms.CallFunc_GetFogRevealedFactor_ReturnValue = CallFunc_GetFogRevealedFactor_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_DetectIsInView_ReturnValue = CallFunc_DetectIsInView_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DFloat_ReturnValue = CallFunc_Subtract_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_DegAtan2_ReturnValue = CallFunc_DegAtan2_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetViewYaw_Yaw = CallFunc_GetViewYaw_Yaw;
	Parms.CallFunc_DoesObjectiveArrowRotate_ReturnValue = CallFunc_DoesObjectiveArrowRotate_ReturnValue;
	Parms.CallFunc_DoesIconRotate_ReturnValue = CallFunc_DoesIconRotate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_IsObjectiveArrowEnabled_ReturnValue = CallFunc_IsObjectiveArrowEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_ClampIntoView_ReturnValue = CallFunc_ClampIntoView_ReturnValue;
	Parms.CallFunc_MarkRenderedInView_ReturnValue = CallFunc_MarkRenderedInView_ReturnValue;
	Parms.CallFunc_GetViewCoordinates_U = CallFunc_GetViewCoordinates_U;
	Parms.CallFunc_GetViewCoordinates_V = CallFunc_GetViewCoordinates_V;
	Parms.CallFunc_GetViewCoordinates_ReturnValue = CallFunc_GetViewCoordinates_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_IsIconVisible_ReturnValue = CallFunc_IsIconVisible_ReturnValue;
	Parms.CallFunc_ClampIntoView_OuterRadiusUV_ImplicitCast = CallFunc_ClampIntoView_OuterRadiusUV_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.K2Node_VariableSet_RenderYaw_ImplicitCast = K2Node_VariableSet_RenderYaw_ImplicitCast;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.Precompute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SizeTypeScale                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   UVtoPixelRatio                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIconSizeUnit           CallFunc_GetIconSizeUnit_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewExtent_ViewExtentX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewExtent_ViewExtentY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetObjectiveArrowSize_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetIconSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::Precompute(double SizeTypeScale, const struct FVector2D& UVtoPixelRatio, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EIconSizeUnit CallFunc_GetIconSizeUnit_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetViewExtent_ViewExtentX, float CallFunc_GetViewExtent_ViewExtentY, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetObjectiveArrowSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float CallFunc_GetIconSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "Precompute");

	Params::UMinimapInternal_Icon_C_Precompute_Params Parms{};

	Parms.SizeTypeScale = SizeTypeScale;
	Parms.UVtoPixelRatio = UVtoPixelRatio;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetIconSizeUnit_ReturnValue = CallFunc_GetIconSizeUnit_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetViewExtent_ViewExtentX = CallFunc_GetViewExtent_ViewExtentX;
	Parms.CallFunc_GetViewExtent_ViewExtentY = CallFunc_GetViewExtent_ViewExtentY;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetObjectiveArrowSize_ReturnValue = CallFunc_GetObjectiveArrowSize_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetIconSize_ReturnValue = CallFunc_GetIconSize_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BaseSize                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SizeTypeScale                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RotatableIconSize                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewExtent_ViewExtentX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewExtent_ViewExtentY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetObjectiveArrowSize_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetIconSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIconSizeUnit           CallFunc_GetIconSizeUnit_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BaseSize_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BaseSize_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateSize(double BaseSize, double SizeTypeScale, double RotatableIconSize, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetViewExtent_ViewExtentX, float CallFunc_GetViewExtent_ViewExtentY, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetObjectiveArrowSize_ReturnValue, float CallFunc_GetIconSize_ReturnValue, enum class EIconSizeUnit CallFunc_GetIconSizeUnit_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_BaseSize_ImplicitCast, double K2Node_VariableSet_BaseSize_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateSize");

	Params::UMinimapInternal_Icon_C_UpdateSize_Params Parms{};

	Parms.BaseSize = BaseSize;
	Parms.SizeTypeScale = SizeTypeScale;
	Parms.RotatableIconSize = RotatableIconSize;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetViewExtent_ViewExtentX = CallFunc_GetViewExtent_ViewExtentX;
	Parms.CallFunc_GetViewExtent_ViewExtentY = CallFunc_GetViewExtent_ViewExtentY;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetObjectiveArrowSize_ReturnValue = CallFunc_GetObjectiveArrowSize_ReturnValue;
	Parms.CallFunc_GetIconSize_ReturnValue = CallFunc_GetIconSize_ReturnValue;
	Parms.CallFunc_GetIconSizeUnit_ReturnValue = CallFunc_GetIconSizeUnit_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_BaseSize_ImplicitCast = K2Node_VariableSet_BaseSize_ImplicitCast;
	Parms.K2Node_VariableSet_BaseSize_ImplicitCast_1 = K2Node_VariableSet_BaseSize_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateDrawColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetIconDrawColor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateDrawColor(const struct FLinearColor& CallFunc_GetIconDrawColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateDrawColor");

	Params::UMinimapInternal_Icon_C_UpdateDrawColor_Params Parms{};

	Parms.CallFunc_GetIconDrawColor_ReturnValue = CallFunc_GetIconDrawColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateZOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetIconZOrder_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateZOrder(int32 CallFunc_GetIconZOrder_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateZOrder");

	Params::UMinimapInternal_Icon_C_UpdateZOrder_Params Parms{};

	Parms.CallFunc_GetIconZOrder_ReturnValue = CallFunc_GetIconZOrder_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconTexture_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetObjectiveArrowTexture_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateArrow(bool Temp_bool_Variable, class UTexture2D* CallFunc_GetIconTexture_ReturnValue, class UTexture2D* CallFunc_GetObjectiveArrowTexture_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateArrow");

	Params::UMinimapInternal_Icon_C_UpdateArrow_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIconTexture_ReturnValue = CallFunc_GetIconTexture_ReturnValue;
	Parms.CallFunc_GetObjectiveArrowTexture_ReturnValue = CallFunc_GetObjectiveArrowTexture_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  CallFunc_GetIconTexture_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::UpdateIcon(class UTexture2D* CallFunc_GetIconTexture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "UpdateIcon");

	Params::UMinimapInternal_Icon_C_UpdateIcon_Params Parms{};

	Parms.CallFunc_GetIconTexture_ReturnValue = CallFunc_GetIconTexture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.SetupListeners
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "SetupListeners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.CleanupListeners
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::CleanupListeners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "CleanupListeners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnIconDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapIconComponent*           MapIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::OnIconDestroyed(class UMapIconComponent* MapIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnIconDestroyed");

	Params::UMinimapInternal_Icon_C_OnIconDestroyed_Params Parms{};

	Parms.MapIcon = MapIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnAppearanceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapIconComponent*           MapIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::OnAppearanceChanged(class UMapIconComponent* MapIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnAppearanceChanged");

	Params::UMinimapInternal_Icon_C_OnAppearanceChanged_Params Parms{};

	Parms.MapIcon = MapIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnIconMaterialChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapIconComponent*           MapIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::OnIconMaterialChanged(class UMapIconComponent* MapIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnIconMaterialChanged");

	Params::UMinimapInternal_Icon_C_OnIconMaterialChanged_Params Parms{};

	Parms.MapIcon = MapIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnViewSizeChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapViewComponent*           MapView                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::OnViewSizeChanged_Event_0(class UMapViewComponent* MapView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnViewSizeChanged_Event_0");

	Params::UMinimapInternal_Icon_C_OnViewSizeChanged_Event_0_Params Parms{};

	Parms.MapView = MapView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.SetupViewListener
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::SetupViewListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "SetupViewListener");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.CleanupViewListener
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::CleanupViewListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "CleanupViewListener");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.AlwaysTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::AlwaysTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "AlwaysTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimapInternal_Icon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMinimapInternal_Icon_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnMouseEnter");

	Params::UMinimapInternal_Icon_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMinimapInternal_Icon_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnMouseLeave");

	Params::UMinimapInternal_Icon_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnMouseClick_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftMouseButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::OnMouseClick_Event_0(bool IsLeftMouseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnMouseClick_Event_0");

	Params::UMinimapInternal_Icon_C_OnMouseClick_Event_0_Params Parms{};

	Parms.IsLeftMouseButton = IsLeftMouseButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.ExecuteUbergraph_MinimapInternal_Icon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMapIconComponent*           K2Node_CustomEvent_MapIcon_2                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMapIconComponent*           K2Node_CustomEvent_MapIcon_1                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMapIconComponent*           K2Node_CustomEvent_MapIcon                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapViewComponent*           K2Node_CustomEvent_MapView                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               K2Node_CustomEvent_IsLeftMouseButton                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::ExecuteUbergraph_MinimapInternal_Icon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMapIconComponent* K2Node_CustomEvent_MapIcon_2, class UMapIconComponent* K2Node_CustomEvent_MapIcon_1, class UMapIconComponent* K2Node_CustomEvent_MapIcon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_4, class UMapViewComponent* K2Node_CustomEvent_MapView, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_CustomEvent_IsLeftMouseButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "ExecuteUbergraph_MinimapInternal_Icon");

	Params::UMinimapInternal_Icon_C_ExecuteUbergraph_MinimapInternal_Icon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_MapIcon_2 = K2Node_CustomEvent_MapIcon_2;
	Parms.K2Node_CustomEvent_MapIcon_1 = K2Node_CustomEvent_MapIcon_1;
	Parms.K2Node_CustomEvent_MapIcon = K2Node_CustomEvent_MapIcon;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_MapView = K2Node_CustomEvent_MapView;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_CustomEvent_IsLeftMouseButton = K2Node_CustomEvent_IsLeftMouseButton;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimapInternal_Icon.MinimapInternal_Icon_C.OnBoxSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   StartUV                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   EndUV                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeftMouseButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsShiftSelect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCtrlSelect                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimapInternal_Icon_C::OnBoxSelect__DelegateSignature(const struct FVector2D& StartUV, const struct FVector2D& EndUV, bool IsLeftMouseButton, bool IsShiftSelect, bool IsCtrlSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimapInternal_Icon_C", "OnBoxSelect__DelegateSignature");

	Params::UMinimapInternal_Icon_C_OnBoxSelect__DelegateSignature_Params Parms{};

	Parms.StartUV = StartUV;
	Parms.EndUV = EndUV;
	Parms.IsLeftMouseButton = IsLeftMouseButton;
	Parms.IsShiftSelect = IsShiftSelect;
	Parms.IsCtrlSelect = IsCtrlSelect;

	UObject::ProcessEvent(Func, &Parms);

}

}


