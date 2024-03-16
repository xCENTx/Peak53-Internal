#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CookingSlot.BP_CookingSlot_C
// (None)

class UClass* UBP_CookingSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookingSlot_C");

	return Clss;
}


// BP_CookingSlot_C BP_CookingSlot.Default__BP_CookingSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CookingSlot_C* UBP_CookingSlot_C::GetDefaultObj()
{
	static class UBP_CookingSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CookingSlot_C*>(UBP_CookingSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CookingSlot.BP_CookingSlot_C.LoadGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKGameInstanceInterface_C>K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSettingsSaveData_C*   CallFunc_SGK_Options_Save_Settings                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::LoadGameSettings(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UBP_SGKSettingsSaveData_C* CallFunc_SGK_Options_Save_Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "LoadGameSettings");

	Params::UBP_CookingSlot_C_LoadGameSettings_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface = K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SGK_Options_Save_Settings = CallFunc_SGK_Options_Save_Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.SetProgressPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::SetProgressPercent(double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "SetProgressPercent");

	Params::UBP_CookingSlot_C_SetProgressPercent_Params Parms{};

	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.GetProgressPercentText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UBP_CookingSlot_C::GetProgressPercentText(int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "GetProgressPercentText");

	Params::UBP_CookingSlot_C_GetProgressPercentText_Params Parms{};

	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CookingSlot.BP_CookingSlot_C.Get_ProgressText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UBP_CookingSlot_C::Get_ProgressText_Text_0(int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "Get_ProgressText_Text_0");

	Params::UBP_CookingSlot_C_Get_ProgressText_Text_0_Params Parms{};

	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CookingSlot.BP_CookingSlot_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FEventReply UBP_CookingSlot_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "OnMouseButtonDoubleClick");

	Params::UBP_CookingSlot_C_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CookingSlot.BP_CookingSlot_C.IsItemValid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ItemValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::IsItemValid(bool* ItemValid, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "IsItemValid");

	Params::UBP_CookingSlot_C_IsItemValid_Params Parms{};

	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemValid != nullptr)
		*ItemValid = Parms.ItemValid;

}


// Function BP_CookingSlot.BP_CookingSlot_C.UpdateItemCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetItemRangeClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SGK_GetItemRangeClass_RangeWeapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TotalAmmo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TotalMaxAmmo_MaxAmmo                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemContainerDetails_ItemFound                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         CallFunc_SGK_ItemContainerDetails_ItemContainerDetails           (ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_SGK_ItemContainerDetails_ItemFound_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_1         (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemContainerDetails_ItemFound_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_2         (ContainsInstancedReference, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemValid_ItemValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::UpdateItemCount(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_SGK_GetItemRangeClass_ReturnValue, class UClass* CallFunc_SGK_GetItemRangeClass_RangeWeapon, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_TotalAmmo_ReturnValue, int32 CallFunc_TotalMaxAmmo_MaxAmmo, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_SGK_ItemContainerDetails_ItemFound_1, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_1, bool CallFunc_SGK_ItemContainerDetails_ItemFound_2, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_2, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsItemValid_ItemValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "UpdateItemCount");

	Params::UBP_CookingSlot_C_UpdateItemCount_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_SGK_GetItemRangeClass_ReturnValue = CallFunc_SGK_GetItemRangeClass_ReturnValue;
	Parms.CallFunc_SGK_GetItemRangeClass_RangeWeapon = CallFunc_SGK_GetItemRangeClass_RangeWeapon;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TotalAmmo_ReturnValue = CallFunc_TotalAmmo_ReturnValue;
	Parms.CallFunc_TotalMaxAmmo_MaxAmmo = CallFunc_TotalMaxAmmo_MaxAmmo;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemFound = CallFunc_SGK_ItemContainerDetails_ItemFound;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemContainerDetails = CallFunc_SGK_ItemContainerDetails_ItemContainerDetails;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemFound_1 = CallFunc_SGK_ItemContainerDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_1 = CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_1;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemFound_2 = CallFunc_SGK_ItemContainerDetails_ItemFound_2;
	Parms.CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_2 = CallFunc_SGK_ItemContainerDetails_ItemContainerDetails_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsItemValid_ItemValid = CallFunc_IsItemValid_ItemValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.UpdateCookingItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  CookingSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem_1                               (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_CookingSlot_C::UpdateCookingItem(const struct FS_InvSlot& CookingSlot, class FText CallFunc_GetItemName_ReturnValue, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "UpdateCookingItem");

	Params::UBP_CookingSlot_C_UpdateCookingItem_Params Parms{};

	Parms.CookingSlot = CookingSlot;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_InvSlotItem_InvItem_1 = CallFunc_SGK_InvSlotItem_InvItem_1;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        ShortNameL                                                       (Edit, BlueprintVisible)
// class FText                        NameL                                                            (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvSlotItem_InvItem                                 (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

class FText UBP_CookingSlot_C::GetItemName(class FText ShortNameL, class FText NameL, bool Temp_bool_Variable, const struct FS_InvItem& CallFunc_SGK_InvSlotItem_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "GetItemName");

	Params::UBP_CookingSlot_C_GetItemName_Params Parms{};

	Parms.ShortNameL = ShortNameL;
	Parms.NameL = NameL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SGK_InvSlotItem_InvItem = CallFunc_SGK_InvSlotItem_InvItem;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CookingSlot.BP_CookingSlot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              MoveIconL                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemValid_ItemValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UBP_MoveIcon_C* MoveIconL, class UDragDropOperation* CallFunc_CreateDragDropOperation_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, uint8 CallFunc_MakeLiteralByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_MoveIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_IsItemValid_ItemValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "OnDragDetected");

	Params::UBP_CookingSlot_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.MoveIconL = MoveIconL;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsItemValid_ItemValid = CallFunc_IsItemValid_ItemValid;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function BP_CookingSlot.BP_CookingSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_DetectDragIfPressed_ReturnValue                         (None)

struct FEventReply UBP_CookingSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "OnMouseButtonDown");

	Params::UBP_CookingSlot_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_DetectDragIfPressed_ReturnValue = CallFunc_DetectDragIfPressed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CookingSlot.BP_CookingSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              MoveIconL                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                MoveSlotL                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SpecialSlotType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SpecialSlotType       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_SpecialSlotType       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                K2Node_MakeStruct_S_InvSlotID                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MoveIcon_C*              K2Node_DynamicCast_AsBP_Move_Icon                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_CookingSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UBP_MoveIcon_C* MoveIconL, const struct FS_InvSlotID& MoveSlotL, bool Temp_bool_Variable, enum class E_SpecialSlotType Temp_byte_Variable, enum class E_SpecialSlotType Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class E_SpecialSlotType K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, const struct FS_InvSlotID& K2Node_MakeStruct_S_InvSlotID, class UBP_MoveIcon_C* K2Node_DynamicCast_AsBP_Move_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "OnDrop");

	Params::UBP_CookingSlot_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.MoveIconL = MoveIconL;
	Parms.MoveSlotL = MoveSlotL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSlotID = K2Node_MakeStruct_S_InvSlotID;
	Parms.K2Node_DynamicCast_AsBP_Move_Icon = K2Node_DynamicCast_AsBP_Move_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CookingSlot.BP_CookingSlot_C.ShowRedOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::ShowRedOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "ShowRedOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.HideOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::HideOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "HideOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.ShowGreenOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::ShowGreenOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "ShowGreenOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "PreConstruct");

	Params::UBP_CookingSlot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.ResumeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::ResumeTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "ResumeTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.PauseTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::PauseTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "PauseTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.ResumeFrom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimerLength                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Paused                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::ResumeFrom(double CurrentTime, double TimerLength, bool Paused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "ResumeFrom");

	Params::UBP_CookingSlot_C_ResumeFrom_Params Parms{};

	Parms.CurrentTime = CurrentTime;
	Parms.TimerLength = TimerLength;
	Parms.Paused = Paused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.RestartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CookingSlot_C::RestartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "RestartTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CookingSlot.BP_CookingSlot_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::StartTimer(double Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "StartTimer");

	Params::UBP_CookingSlot_C_StartTimer_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CookingSlot_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "OnMouseLeave");

	Params::UBP_CookingSlot_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_CookingSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "OnMouseEnter");

	Params::UBP_CookingSlot_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CookingSlot.BP_CookingSlot_C.ExecuteUbergraph_BP_CookingSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ItemTooltip_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerInventory_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemCookingRecipe_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingRecipe            CallFunc_SGK_ItemCookingRecipe_CookingRecipe                     (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ItemTooltip_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_CurrentTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TimerLength                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Paused                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemValid_ItemValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_StartTimer_Time_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CookingSlot_C::ExecuteUbergraph_BP_CookingSlot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ItemTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_SGK_ItemCookingRecipe_ReturnValue, const struct FS_CookingRecipe& CallFunc_SGK_ItemCookingRecipe_CookingRecipe, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UBP_ItemTooltip_C* CallFunc_Create_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, double K2Node_CustomEvent_CurrentTime, double K2Node_CustomEvent_TimerLength, bool K2Node_CustomEvent_Paused, double K2Node_CustomEvent_Time, bool CallFunc_IsValid_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsItemValid_ItemValid, bool CallFunc_IsValid_ReturnValue_6, const struct FPointerEvent& K2Node_Event_MouseEvent_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, double CallFunc_StartTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CookingSlot_C", "ExecuteUbergraph_BP_CookingSlot");

	Params::UBP_CookingSlot_C_ExecuteUbergraph_BP_CookingSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SGK_ItemCookingRecipe_ReturnValue = CallFunc_SGK_ItemCookingRecipe_ReturnValue;
	Parms.CallFunc_SGK_ItemCookingRecipe_CookingRecipe = CallFunc_SGK_ItemCookingRecipe_CookingRecipe;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentTime = K2Node_CustomEvent_CurrentTime;
	Parms.K2Node_CustomEvent_TimerLength = K2Node_CustomEvent_TimerLength;
	Parms.K2Node_CustomEvent_Paused = K2Node_CustomEvent_Paused;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_IsItemValid_ItemValid = CallFunc_IsItemValid_ItemValid;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_StartTimer_Time_ImplicitCast = CallFunc_StartTimer_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_1 = CallFunc_K2_SetTimer_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


