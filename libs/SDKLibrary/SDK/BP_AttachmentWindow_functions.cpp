#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_AttachmentWindow.BP_AttachmentWindow_C
// (None)

class UClass* UBP_AttachmentWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttachmentWindow_C");

	return Clss;
}


// BP_AttachmentWindow_C BP_AttachmentWindow.Default__BP_AttachmentWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AttachmentWindow_C* UBP_AttachmentWindow_C::GetDefaultObj()
{
	static class UBP_AttachmentWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AttachmentWindow_C*>(UBP_AttachmentWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.UpdateAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*        CallFunc_SelectAttachmentSlot_AttachmentSlot                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentWindow_C::UpdateAllSlots(int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_AttachmentSlot_C* CallFunc_SelectAttachmentSlot_AttachmentSlot, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "UpdateAllSlots");

	Params::UBP_AttachmentWindow_C_UpdateAllSlots_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectAttachmentSlot_AttachmentSlot = CallFunc_SelectAttachmentSlot_AttachmentSlot;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.HideUnneedSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      RangeWeaponL                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class E_AttachmentType>  Temp_byte_Variable                                               (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*        CallFunc_SelectAttachmentSlot_AttachmentSlot                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInventoryInterface_C>K2Node_DynamicCast_AsBP_SGKInventory_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_SelfItem_SelfItem                                   (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemWeaponClass_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemWeaponClass_RangeWeapon                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentWindow_C::HideUnneedSlots(class UClass* RangeWeaponL, int32 CallFunc_MakeLiteralInt_ReturnValue, TSet<enum class E_AttachmentType> Temp_byte_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UBP_AttachmentSlot_C* CallFunc_SelectAttachmentSlot_AttachmentSlot, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface, bool K2Node_DynamicCast_bSuccess, const struct FS_InvItem& CallFunc_SGK_SelfItem_SelfItem, bool CallFunc_SGK_GetItemWeaponClass_ReturnValue, class UClass* CallFunc_SGK_GetItemWeaponClass_RangeWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "HideUnneedSlots");

	Params::UBP_AttachmentWindow_C_HideUnneedSlots_Params Parms{};

	Parms.RangeWeaponL = RangeWeaponL;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectAttachmentSlot_AttachmentSlot = CallFunc_SelectAttachmentSlot_AttachmentSlot;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = CallFunc_SlotAsUniformGridSlot_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKInventory_Interface = K2Node_DynamicCast_AsBP_SGKInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_SelfItem_SelfItem = CallFunc_SGK_SelfItem_SelfItem;
	Parms.CallFunc_SGK_GetItemWeaponClass_ReturnValue = CallFunc_SGK_GetItemWeaponClass_ReturnValue;
	Parms.CallFunc_SGK_GetItemWeaponClass_RangeWeapon = CallFunc_SGK_GetItemWeaponClass_RangeWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.SelectAttachmentSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_AttachmentType        AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*        AttachmentSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_AttachmentType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*        Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*        K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentWindow_C::SelectAttachmentSlot(enum class E_AttachmentType AttachmentType, class UBP_AttachmentSlot_C** AttachmentSlot, enum class E_AttachmentType Temp_byte_Variable, class UBP_AttachmentSlot_C* Temp_object_Variable, class UBP_AttachmentSlot_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "SelectAttachmentSlot");

	Params::UBP_AttachmentWindow_C_SelectAttachmentSlot_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (AttachmentSlot != nullptr)
		*AttachmentSlot = Parms.AttachmentSlot;

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.SetUpWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryHUD_C*          HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AttachmentSlot_C*        K2Node_DynamicCast_AsBP_Attachment_Slot                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentWindow_C::SetUpWindow(class UBP_WeaponInventory_C* Inventory, class UBP_InventoryHUD_C* HUD, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UBP_AttachmentSlot_C* K2Node_DynamicCast_AsBP_Attachment_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "SetUpWindow");

	Params::UBP_AttachmentWindow_C_SetUpWindow_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.HUD = HUD;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Attachment_Slot = K2Node_DynamicCast_AsBP_Attachment_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnHeaderMouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_CaptureMouse_ReturnValue                                (None)
// struct FVector2D                   CallFunc_AbsoluteToViewport_PixelPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_ViewportPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UBP_AttachmentWindow_C::OnHeaderMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToViewport_PixelPosition, const struct FVector2D& CallFunc_AbsoluteToViewport_ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "OnHeaderMouseButtonDown");

	Params::UBP_AttachmentWindow_C_OnHeaderMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_CaptureMouse_ReturnValue = CallFunc_CaptureMouse_ReturnValue;
	Parms.CallFunc_AbsoluteToViewport_PixelPosition = CallFunc_AbsoluteToViewport_PixelPosition;
	Parms.CallFunc_AbsoluteToViewport_ViewportPosition = CallFunc_AbsoluteToViewport_ViewportPosition;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   RequestedSize                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 DetectDragReturnValue                                            (Edit, BlueprintVisible)
// struct FVector2D                   MouseDelta                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               LocalMouseEvent                                                  (Edit, BlueprintVisible)
// struct FGeometry                   LocalGeometry                                                    (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue                         (None)
// struct FEventReply                 K2Node_MakeStruct_EventReply_1                                   (None)
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue_1                       (None)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_PixelPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_ViewportPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_CaptureMouse_ReturnValue                                (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 K2Node_MakeStruct_EventReply_2                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue_2                       (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_PixelPosition_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_ViewportPosition_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_PixelPosition_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToViewport_ViewportPosition_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UBP_AttachmentWindow_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& RequestedSize, const struct FEventReply& DetectDragReturnValue, const struct FVector2D& MouseDelta, const struct FPointerEvent& LocalMouseEvent, const struct FGeometry& LocalGeometry, const struct FEventReply& K2Node_MakeStruct_EventReply, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply_1, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToViewport_PixelPosition, const struct FVector2D& CallFunc_AbsoluteToViewport_ViewportPosition, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FEventReply& K2Node_MakeStruct_EventReply_2, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_1, const struct FVector2D& CallFunc_AbsoluteToViewport_PixelPosition_1, const struct FVector2D& CallFunc_AbsoluteToViewport_ViewportPosition_1, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_2, const struct FVector2D& CallFunc_AbsoluteToViewport_PixelPosition_2, const struct FVector2D& CallFunc_AbsoluteToViewport_ViewportPosition_2, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "OnMouseMove");

	Params::UBP_AttachmentWindow_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.RequestedSize = RequestedSize;
	Parms.DetectDragReturnValue = DetectDragReturnValue;
	Parms.MouseDelta = MouseDelta;
	Parms.LocalMouseEvent = LocalMouseEvent;
	Parms.LocalGeometry = LocalGeometry;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue = CallFunc_ReleaseMouseCapture_ReturnValue;
	Parms.K2Node_MakeStruct_EventReply_1 = K2Node_MakeStruct_EventReply_1;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue_1 = CallFunc_ReleaseMouseCapture_ReturnValue_1;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_AbsoluteToViewport_PixelPosition = CallFunc_AbsoluteToViewport_PixelPosition;
	Parms.CallFunc_AbsoluteToViewport_ViewportPosition = CallFunc_AbsoluteToViewport_ViewportPosition;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_CaptureMouse_ReturnValue = CallFunc_CaptureMouse_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.K2Node_MakeStruct_EventReply_2 = K2Node_MakeStruct_EventReply_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue_2 = CallFunc_ReleaseMouseCapture_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_1 = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_1;
	Parms.CallFunc_AbsoluteToViewport_PixelPosition_1 = CallFunc_AbsoluteToViewport_PixelPosition_1;
	Parms.CallFunc_AbsoluteToViewport_ViewportPosition_1 = CallFunc_AbsoluteToViewport_ViewportPosition_1;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_2 = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue_2;
	Parms.CallFunc_AbsoluteToViewport_PixelPosition_2 = CallFunc_AbsoluteToViewport_PixelPosition_2;
	Parms.CallFunc_AbsoluteToViewport_ViewportPosition_2 = CallFunc_AbsoluteToViewport_ViewportPosition_2;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue                         (None)

struct FEventReply UBP_AttachmentWindow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "OnMouseButtonUp");

	Params::UBP_AttachmentWindow_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue = CallFunc_ReleaseMouseCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.InitializeWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryHUD_C*          HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentWindow_C::InitializeWindow(class UBP_WeaponInventory_C* Inventory, class UBP_InventoryHUD_C* HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "InitializeWindow");

	Params::UBP_AttachmentWindow_C_InitializeWindow_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_AttachmentWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_AttachmentWindow_C::BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "BndEvt__Button_81_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachmentWindow.BP_AttachmentWindow_C.ExecuteUbergraph_BP_AttachmentWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryHUD_C*          K2Node_CustomEvent_HUD                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AttachmentWindow_C::ExecuteUbergraph_BP_AttachmentWindow(int32 EntryPoint, class UBP_WeaponInventory_C* K2Node_CustomEvent_Inventory, class UBP_InventoryHUD_C* K2Node_CustomEvent_HUD, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachmentWindow_C", "ExecuteUbergraph_BP_AttachmentWindow");

	Params::UBP_AttachmentWindow_C_ExecuteUbergraph_BP_AttachmentWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_HUD = K2Node_CustomEvent_HUD;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


