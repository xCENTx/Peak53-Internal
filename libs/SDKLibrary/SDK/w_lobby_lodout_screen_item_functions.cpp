#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C
// (None)

class UClass* UW_lobby_lodout_screen_item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_lobby_lodout_screen_item_C");

	return Clss;
}


// w_lobby_lodout_screen_item_C w_lobby_lodout_screen_item.Default__w_lobby_lodout_screen_item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_lobby_lodout_screen_item_C* UW_lobby_lodout_screen_item_C::GetDefaultObj()
{
	static class UW_lobby_lodout_screen_item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_lobby_lodout_screen_item_C*>(UW_lobby_lodout_screen_item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.UpdateRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemDetails              Out_Row                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Data_Table                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FName                        Row_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// struct FS_StartingWeaponItem       K2Node_MakeStruct_S_StartingWeaponItem                           (NoDestructor, HasGetValueTypeHash)
// struct FS_StartingWeaponItem       K2Node_MakeStruct_S_StartingWeaponItem_1                         (NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_StartingWeaponItem>K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FS_StartingWeaponItem>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_3                           (NoDestructor)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost                                 (NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingCost             K2Node_MakeStruct_S_CraftingCost_1                               (NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_CraftingCost>     K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<struct FS_CraftingCost>     K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKGameInstance_C*       K2Node_DynamicCast_AsBP_SGKGame_Instance_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::UpdateRow(const struct FS_ItemDetails& Out_Row, int32 CurrentIndex, class UDataTable* Data_Table, class FName Row_Name, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FS_StartingWeaponItem& K2Node_MakeStruct_S_StartingWeaponItem, const struct FS_StartingWeaponItem& K2Node_MakeStruct_S_StartingWeaponItem_1, TArray<struct FS_StartingWeaponItem>& K2Node_MakeArray_Array, TArray<struct FS_StartingWeaponItem>& K2Node_MakeArray_Array_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_1, TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array_2, TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array_3, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "UpdateRow");

	Params::UW_lobby_lodout_screen_item_C_UpdateRow_Params Parms{};

	Parms.Out_Row = Out_Row;
	Parms.CurrentIndex = CurrentIndex;
	Parms.Data_Table = Data_Table;
	Parms.Row_Name = Row_Name;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeStruct_S_StartingWeaponItem = K2Node_MakeStruct_S_StartingWeaponItem;
	Parms.K2Node_MakeStruct_S_StartingWeaponItem_1 = K2Node_MakeStruct_S_StartingWeaponItem_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_3 = K2Node_MakeStruct_DataTableRowHandle_3;
	Parms.K2Node_MakeStruct_S_CraftingCost = K2Node_MakeStruct_S_CraftingCost;
	Parms.K2Node_MakeStruct_S_CraftingCost_1 = K2Node_MakeStruct_S_CraftingCost_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance = K2Node_DynamicCast_AsBP_SGKGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_1 = K2Node_DynamicCast_AsBP_SGKGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_2 = K2Node_DynamicCast_AsBP_SGKGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_SGKGame_Instance_3 = K2Node_DynamicCast_AsBP_SGKGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.DestroyRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::DestroyRenderTarget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "DestroyRenderTarget");

	Params::UW_lobby_lodout_screen_item_C_DestroyRenderTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.CreateRenderTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_3                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponCategories       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// enum class EWeaponCategories       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponCategories       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponCategories       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_R2T_Weapon_C*            K2Node_DynamicCast_AsBP_R2T_Weapon                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::CreateRenderTarget(class UClass* NewParam, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, enum class EWeaponCategories Temp_byte_Variable, class UTextureRenderTarget2D* Temp_object_Variable, class UTextureRenderTarget2D* Temp_object_Variable_1, class UTextureRenderTarget2D* Temp_object_Variable_2, class UTextureRenderTarget2D* Temp_object_Variable_3, enum class EWeaponCategories Temp_byte_Variable_1, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, class UTexture* Temp_object_Variable_7, enum class EWeaponCategories Temp_byte_Variable_2, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, bool CallFunc_IsValid_ReturnValue, class UTexture* K2Node_Select_Default, class UTextureRenderTarget2D* K2Node_Select_Default_1, double K2Node_Select_Default_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EWeaponCategories Temp_byte_Variable_3, class UClass* K2Node_Select_Default_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_R2T_Weapon_C* K2Node_DynamicCast_AsBP_R2T_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "CreateRenderTarget");

	Params::UW_lobby_lodout_screen_item_C_CreateRenderTarget_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_R2T_Weapon = K2Node_DynamicCast_AsBP_R2T_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.SwitchDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::SwitchDown(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "SwitchDown");

	Params::UW_lobby_lodout_screen_item_C_SwitchDown_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.SwitchUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::SwitchUp(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "SwitchUp");

	Params::UW_lobby_lodout_screen_item_C_SwitchUp_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.BndEvt__w_lobby_lodout_screen_item_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_lobby_lodout_screen_item_C::BndEvt__w_lobby_lodout_screen_item_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "BndEvt__w_lobby_lodout_screen_item_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.BndEvt__w_lobby_lodout_screen_item_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_lobby_lodout_screen_item_C::BndEvt__w_lobby_lodout_screen_item_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "BndEvt__w_lobby_lodout_screen_item_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_lobby_lodout_screen_item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "PreConstruct");

	Params::UW_lobby_lodout_screen_item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.ExecuteUbergraph_w_lobby_lodout_screen_item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_lobby_lodout_screen_item_C::ExecuteUbergraph_w_lobby_lodout_screen_item(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_lobby_lodout_screen_item_C", "ExecuteUbergraph_w_lobby_lodout_screen_item");

	Params::UW_lobby_lodout_screen_item_C_ExecuteUbergraph_w_lobby_lodout_screen_item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


