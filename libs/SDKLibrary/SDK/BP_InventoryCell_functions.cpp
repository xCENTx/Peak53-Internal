#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_InventoryCell.BP_InventoryCell_C
// (None)

class UClass* UBP_InventoryCell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InventoryCell_C");

	return Clss;
}


// BP_InventoryCell_C BP_InventoryCell.Default__BP_InventoryCell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InventoryCell_C* UBP_InventoryCell_C::GetDefaultObj()
{
	static class UBP_InventoryCell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InventoryCell_C*>(UBP_InventoryCell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InventoryCell.BP_InventoryCell_C.CellDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBP_InventoryCell_C::CellDebugText(bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "CellDebugText");

	Params::UBP_InventoryCell_C_CellDebugText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryCell.BP_InventoryCell_C.ItemDragOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*          DragOperation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              MoveWidgetL                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              K2Node_DynamicCast_AsBP_Move_Icon                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::ItemDragOver(class UDragDropOperation* DragOperation, const struct FVector2D& NewLocalVar_0, class UBP_MoveIcon_C* MoveWidgetL, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "ItemDragOver");

	Params::UBP_InventoryCell_C_ItemDragOver_Params Parms{};

	Parms.DragOperation = DragOperation;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.MoveWidgetL = MoveWidgetL;
	Parms.K2Node_DynamicCast_AsBP_Move_Icon = K2Node_DynamicCast_AsBP_Move_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.FuelItemChecks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Allow                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CraftingInvL                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingComponent_C*      CookingInvL                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFuelItem_IsFuelItem                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIndexFuelSlot_IsFuelSlot                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     K2Node_DynamicCast_AsBP_Crafting_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFuelItem_IsFuelItem_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIndexFuelSlot_IsFuelSlot_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingComponent_C*      K2Node_DynamicCast_AsBP_Cooking_Component                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::FuelItemChecks(class FName ID, bool* Allow, class UBP_CraftingComponent_C* CraftingInvL, class UBP_CookingComponent_C* CookingInvL, bool CallFunc_IsFuelItem_IsFuelItem, bool CallFunc_IsIndexFuelSlot_IsFuelSlot, class UBP_CraftingComponent_C* K2Node_DynamicCast_AsBP_Crafting_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFuelItem_IsFuelItem_1, bool CallFunc_IsIndexFuelSlot_IsFuelSlot_1, class UBP_CookingComponent_C* K2Node_DynamicCast_AsBP_Cooking_Component, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "FuelItemChecks");

	Params::UBP_InventoryCell_C_FuelItemChecks_Params Parms{};

	Parms.ID = ID;
	Parms.CraftingInvL = CraftingInvL;
	Parms.CookingInvL = CookingInvL;
	Parms.CallFunc_IsFuelItem_IsFuelItem = CallFunc_IsFuelItem_IsFuelItem;
	Parms.CallFunc_IsIndexFuelSlot_IsFuelSlot = CallFunc_IsIndexFuelSlot_IsFuelSlot;
	Parms.K2Node_DynamicCast_AsBP_Crafting_Component = K2Node_DynamicCast_AsBP_Crafting_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFuelItem_IsFuelItem_1 = CallFunc_IsFuelItem_IsFuelItem_1;
	Parms.CallFunc_IsIndexFuelSlot_IsFuelSlot_1 = CallFunc_IsIndexFuelSlot_IsFuelSlot_1;
	Parms.K2Node_DynamicCast_AsBP_Cooking_Component = K2Node_DynamicCast_AsBP_Cooking_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Allow != nullptr)
		*Allow = Parms.Allow;

}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              MoveWidgetL                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails                          (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_1                        (HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_FuelItemChecks_Allow                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_2                        (HasGetValueTypeHash)
// bool                               CallFunc_FuelItemChecks_Allow_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_3                        (HasGetValueTypeHash)
// struct FS_EquipmentSlot            CallFunc_SelectEquipmentSlot_ReturnValue                         (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_FuelItemChecks_Allow_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_FuelItemChecks_Allow_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_4                        (HasGetValueTypeHash)
// struct FS_NotificationDetails      K2Node_MakeStruct_S_NotificationDetails_5                        (HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue_1                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_HoldingWeaponCheck_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot_1                                (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_HoldingItemCheck_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentSlotID          K2Node_MakeStruct_S_EquipmentSlotID                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotID             K2Node_MakeStruct_S_WeaponSlotID                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_2                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_3                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              K2Node_DynamicCast_AsBP_Move_Icon                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_InventoryCell_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UBP_MoveIcon_C* MoveWidgetL, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, bool CallFunc_FuelItemChecks_Allow, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_2, bool CallFunc_FuelItemChecks_Allow_1, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_3, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, bool CallFunc_FuelItemChecks_Allow_2, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, bool CallFunc_FuelItemChecks_Allow_3, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_4, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_5, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_1, bool CallFunc_HoldingWeaponCheck_ReturnValue, bool CallFunc_SGK_GetInvSlot_SlotFound_1, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot_1, bool CallFunc_HoldingItemCheck_ReturnValue, const struct FS_EquipmentSlotID& K2Node_MakeStruct_S_EquipmentSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_2, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_3, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "OnDrop");

	Params::UBP_InventoryCell_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.MoveWidgetL = MoveWidgetL;
	Parms.K2Node_MakeStruct_S_NotificationDetails = K2Node_MakeStruct_S_NotificationDetails;
	Parms.K2Node_MakeStruct_S_NotificationDetails_1 = K2Node_MakeStruct_S_NotificationDetails_1;
	Parms.CallFunc_SelectAttachmentItem_IsValid = CallFunc_SelectAttachmentItem_IsValid;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue = CallFunc_SelectAttachmentItem_ReturnValue;
	Parms.CallFunc_FuelItemChecks_Allow = CallFunc_FuelItemChecks_Allow;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue = CallFunc_SelectedWeaponSlot_ReturnValue;
	Parms.K2Node_MakeStruct_S_NotificationDetails_2 = K2Node_MakeStruct_S_NotificationDetails_2;
	Parms.CallFunc_FuelItemChecks_Allow_1 = CallFunc_FuelItemChecks_Allow_1;
	Parms.K2Node_MakeStruct_S_NotificationDetails_3 = K2Node_MakeStruct_S_NotificationDetails_3;
	Parms.CallFunc_SelectEquipmentSlot_ReturnValue = CallFunc_SelectEquipmentSlot_ReturnValue;
	Parms.CallFunc_FuelItemChecks_Allow_2 = CallFunc_FuelItemChecks_Allow_2;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;
	Parms.CallFunc_FuelItemChecks_Allow_3 = CallFunc_FuelItemChecks_Allow_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.K2Node_MakeStruct_S_NotificationDetails_4 = K2Node_MakeStruct_S_NotificationDetails_4;
	Parms.K2Node_MakeStruct_S_NotificationDetails_5 = K2Node_MakeStruct_S_NotificationDetails_5;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue_1 = CallFunc_SelectedWeaponSlot_ReturnValue_1;
	Parms.CallFunc_HoldingWeaponCheck_ReturnValue = CallFunc_HoldingWeaponCheck_ReturnValue;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound_1 = CallFunc_SGK_GetInvSlot_SlotFound_1;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot_1 = CallFunc_SGK_GetInvSlot_InvSlot_1;
	Parms.CallFunc_HoldingItemCheck_ReturnValue = CallFunc_HoldingItemCheck_ReturnValue;
	Parms.K2Node_MakeStruct_S_EquipmentSlotID = K2Node_MakeStruct_S_EquipmentSlotID;
	Parms.K2Node_MakeStruct_S_InvSlotID_1 = K2Node_MakeStruct_S_InvSlotID_1;
	Parms.K2Node_MakeStruct_S_WeaponSlotID = K2Node_MakeStruct_S_WeaponSlotID;
	Parms.K2Node_MakeStruct_S_InvSlotID_2 = K2Node_MakeStruct_S_InvSlotID_2;
	Parms.K2Node_MakeStruct_S_InvSlotID_3 = K2Node_MakeStruct_S_InvSlotID_3;
	Parms.K2Node_DynamicCast_AsBP_Move_Icon = K2Node_DynamicCast_AsBP_Move_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InventoryCell.BP_InventoryCell_C.HideOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::HideOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "HideOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryCell.BP_InventoryCell_C.DragOverLayCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MoveIcon_C*              Move_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_2                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RootSpaceCheck_SlotsBlocked                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_RootSpaceCheck_FoundSlots                           (ReferenceParm, ContainsInstancedReference)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlotID                Temp_struct_Variable                                             (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_RootSpaceCheck_FoundSlots_1                         (ReferenceParm, ContainsInstancedReference)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID_3                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EquipmentSlot            CallFunc_SelectEquipmentSlot_ReturnValue                         (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Height_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_ItemSize_Width_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_2                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_3                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_RootSpaceCheck_SlotsBlocked_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_RootSpaceCheck_FoundSlots_2                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SGK_RootSpaceCheck_SlotsBlocked_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          CallFunc_SGK_RootSpaceCheck_FoundSlots_3                         (ReferenceParm, ContainsInstancedReference)

void UBP_InventoryCell_C::DragOverLayCheck(class UBP_MoveIcon_C* Move_Widget, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_1, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_2, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, int32 CallFunc_SGK_ItemSize_Height, int32 CallFunc_SGK_ItemSize_Width, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, const struct FS_InvSlotID& Temp_struct_Variable, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, int32 CallFunc_SGK_ItemSize_Height_1, int32 CallFunc_SGK_ItemSize_Width_1, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_1, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID_3, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, int32 CallFunc_SGK_ItemSize_Height_2, int32 CallFunc_SGK_ItemSize_Width_2, int32 CallFunc_SGK_ItemSize_Height_3, int32 CallFunc_SGK_ItemSize_Width_3, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_InvSlotID& K2Node_Select_Default, const struct FS_InvSlot& CallFunc_Array_Get_Item_2, const struct FS_InvSlot& CallFunc_Array_Get_Item_3, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_2, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_2, bool CallFunc_SGK_RootSpaceCheck_SlotsBlocked_3, TArray<struct FS_InvSlot>& CallFunc_SGK_RootSpaceCheck_FoundSlots_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "DragOverLayCheck");

	Params::UBP_InventoryCell_C_DragOverLayCheck_Params Parms{};

	Parms.Move_Widget = Move_Widget;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.K2Node_MakeStruct_S_InvSlotID_1 = K2Node_MakeStruct_S_InvSlotID_1;
	Parms.K2Node_MakeStruct_S_InvSlotID_2 = K2Node_MakeStruct_S_InvSlotID_2;
	Parms.CallFunc_SelectAttachmentItem_IsValid = CallFunc_SelectAttachmentItem_IsValid;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue = CallFunc_SelectAttachmentItem_ReturnValue;
	Parms.CallFunc_SGK_ItemSize_Height = CallFunc_SGK_ItemSize_Height;
	Parms.CallFunc_SGK_ItemSize_Width = CallFunc_SGK_ItemSize_Width;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SGK_RootSpaceCheck_SlotsBlocked = CallFunc_SGK_RootSpaceCheck_SlotsBlocked;
	Parms.CallFunc_SGK_RootSpaceCheck_FoundSlots = CallFunc_SGK_RootSpaceCheck_FoundSlots;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue = CallFunc_SelectedWeaponSlot_ReturnValue;
	Parms.CallFunc_SGK_ItemSize_Height_1 = CallFunc_SGK_ItemSize_Height_1;
	Parms.CallFunc_SGK_ItemSize_Width_1 = CallFunc_SGK_ItemSize_Width_1;
	Parms.CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1 = CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1;
	Parms.CallFunc_SGK_RootSpaceCheck_FoundSlots_1 = CallFunc_SGK_RootSpaceCheck_FoundSlots_1;
	Parms.K2Node_MakeStruct_S_InvSlotID_3 = K2Node_MakeStruct_S_InvSlotID_3;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;
	Parms.CallFunc_SelectEquipmentSlot_ReturnValue = CallFunc_SelectEquipmentSlot_ReturnValue;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_SGK_ItemSize_Height_2 = CallFunc_SGK_ItemSize_Height_2;
	Parms.CallFunc_SGK_ItemSize_Width_2 = CallFunc_SGK_ItemSize_Width_2;
	Parms.CallFunc_SGK_ItemSize_Height_3 = CallFunc_SGK_ItemSize_Height_3;
	Parms.CallFunc_SGK_ItemSize_Width_3 = CallFunc_SGK_ItemSize_Width_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_SGK_RootSpaceCheck_SlotsBlocked_2 = CallFunc_SGK_RootSpaceCheck_SlotsBlocked_2;
	Parms.CallFunc_SGK_RootSpaceCheck_FoundSlots_2 = CallFunc_SGK_RootSpaceCheck_FoundSlots_2;
	Parms.CallFunc_SGK_RootSpaceCheck_SlotsBlocked_3 = CallFunc_SGK_RootSpaceCheck_SlotsBlocked_3;
	Parms.CallFunc_SGK_RootSpaceCheck_FoundSlots_3 = CallFunc_SGK_RootSpaceCheck_FoundSlots_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.UpdateOverLay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MoveIcon_C*              Move_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::UpdateOverLay(class UBP_MoveIcon_C* Move_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "UpdateOverLay");

	Params::UBP_InventoryCell_C_UpdateOverLay_Params Parms{};

	Parms.Move_Widget = Move_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.ShowCheckCellsOverlay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>          Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGridInterface_C>K2Node_DynamicCast_AsBP_SGKGrid_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_InventoryCell_C*> CallFunc_SGK_CellSlots_Cells                                     (ReferenceParm, ContainsInstancedReference)
// class UBP_InventoryCell_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::ShowCheckCellsOverlay(TArray<struct FS_InvSlot>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_SGKGridInterface_C> K2Node_DynamicCast_AsBP_SGKGrid_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UBP_InventoryCell_C*>& CallFunc_SGK_CellSlots_Cells, class UBP_InventoryCell_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "ShowCheckCellsOverlay");

	Params::UBP_InventoryCell_C_ShowCheckCellsOverlay_Params Parms{};

	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKGrid_Interface = K2Node_DynamicCast_AsBP_SGKGrid_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_CellSlots_Cells = CallFunc_SGK_CellSlots_Cells;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.HideCheckCellsOverlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGridInterface_C>K2Node_DynamicCast_AsBP_SGKGrid_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UBP_InventoryCell_C*> CallFunc_SGK_CellSlots_Cells                                     (ReferenceParm, ContainsInstancedReference)
// class UBP_InventoryCell_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::HideCheckCellsOverlay(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IBP_SGKGridInterface_C> K2Node_DynamicCast_AsBP_SGKGrid_Interface, bool K2Node_DynamicCast_bSuccess, const struct FS_InvSlot& CallFunc_Array_Get_Item, TArray<class UBP_InventoryCell_C*>& CallFunc_SGK_CellSlots_Cells, class UBP_InventoryCell_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "HideCheckCellsOverlay");

	Params::UBP_InventoryCell_C_HideCheckCellsOverlay_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBP_SGKGrid_Interface = K2Node_DynamicCast_AsBP_SGKGrid_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SGK_CellSlots_Cells = CallFunc_SGK_CellSlots_Cells;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.ShowGreenOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::ShowGreenOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "ShowGreenOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryCell.BP_InventoryCell_C.ShowRedOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::ShowRedOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "ShowRedOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "OnDragLeave");

	Params::UBP_InventoryCell_C_OnDragLeave_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "OnDragCancelled");

	Params::UBP_InventoryCell_C_OnDragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "OnDragEnter");

	Params::UBP_InventoryCell_C_OnDragEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.ParentGridCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::ParentGridCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "ParentGridCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryCell.BP_InventoryCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_InventoryCell.BP_InventoryCell_C.ExecuteUbergraph_BP_InventoryCell
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent_2                                      (None)
// class UDragDropOperation*          K2Node_Event_Operation_2                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent_1                                      (ConstParm)
// class UDragDropOperation*          K2Node_Event_Operation_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (None)
// class UDragDropOperation*          K2Node_Event_Operation                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              K2Node_DynamicCast_AsBP_Move_Icon                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InventoryCell_C::ExecuteUbergraph_BP_InventoryCell(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_2, class UDragDropOperation* K2Node_Event_Operation_2, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "ExecuteUbergraph_BP_InventoryCell");

	Params::UBP_InventoryCell_C_ExecuteUbergraph_BP_InventoryCell_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PointerEvent_2 = K2Node_Event_PointerEvent_2;
	Parms.K2Node_Event_Operation_2 = K2Node_Event_Operation_2;
	Parms.K2Node_Event_PointerEvent_1 = K2Node_Event_PointerEvent_1;
	Parms.K2Node_Event_Operation_1 = K2Node_Event_Operation_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.K2Node_Event_Operation = K2Node_Event_Operation;
	Parms.K2Node_DynamicCast_AsBP_Move_Icon = K2Node_DynamicCast_AsBP_Move_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InventoryCell.BP_InventoryCell_C.CreateDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_InventoryCell_C::CreateDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InventoryCell_C", "CreateDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


