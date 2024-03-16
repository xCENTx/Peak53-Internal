#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKFunctions.BP_SGKFunctions_C
// (None)

class UClass* UBP_SGKFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKFunctions_C");

	return Clss;
}


// BP_SGKFunctions_C BP_SGKFunctions.Default__BP_SGKFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SGKFunctions_C* UBP_SGKFunctions_C::GetDefaultObj()
{
	static class UBP_SGKFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SGKFunctions_C*>(UBP_SGKFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKFunctions.BP_SGKFunctions_C.UpdateAimedSense
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MouseSence                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          SaveL                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          K2Node_DynamicCast_AsBP_Control_Saves                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::UpdateAimedSense(double MouseSence, class UObject* __WorldContext, class UBP_ControlSaves_C* SaveL, bool CallFunc_SaveGameToSlot_ReturnValue, class UBP_ControlSaves_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_ControlSaves_C* K2Node_DynamicCast_AsBP_Control_Saves, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "UpdateAimedSense");

	Params::UBP_SGKFunctions_C_UpdateAimedSense_Params Parms{};

	Parms.MouseSence = MouseSence;
	Parms.__WorldContext = __WorldContext;
	Parms.SaveL = SaveL;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Control_Saves = K2Node_DynamicCast_AsBP_Control_Saves;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.UpdateMouseSense
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AimedSense                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          SaveL                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          K2Node_DynamicCast_AsBP_Control_Saves                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::UpdateMouseSense(double AimedSense, class UObject* __WorldContext, class UBP_ControlSaves_C* SaveL, bool CallFunc_SaveGameToSlot_ReturnValue, class UBP_ControlSaves_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_ControlSaves_C* K2Node_DynamicCast_AsBP_Control_Saves, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "UpdateMouseSense");

	Params::UBP_SGKFunctions_C_UpdateMouseSense_Params Parms{};

	Parms.AimedSense = AimedSense;
	Parms.__WorldContext = __WorldContext;
	Parms.SaveL = SaveL;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Control_Saves = K2Node_DynamicCast_AsBP_Control_Saves;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.LoadControls
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   KeyL                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FKey>                KeyMappingsL                                                     (Edit, BlueprintVisible)
// TArray<class FName>                KeyNamesL                                                        (Edit, BlueprintVisible)
// class UInputMappingContext*        MappingContextL                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          SaveL                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::LoadControls(class UObject* __WorldContext, const struct FEnhancedActionKeyMapping& KeyL, const TArray<struct FKey>& KeyMappingsL, const TArray<class FName>& KeyNamesL, class UInputMappingContext* MappingContextL, class UBP_ControlSaves_C* SaveL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "LoadControls");

	Params::UBP_SGKFunctions_C_LoadControls_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.KeyL = KeyL;
	Parms.KeyMappingsL = KeyMappingsL;
	Parms.KeyNamesL = KeyNamesL;
	Parms.MappingContextL = MappingContextL;
	Parms.SaveL = SaveL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.AddKeyToSave
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FEnhancedActionKeyMapping   KeyAction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          SaveL                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ControlSaves_C*          K2Node_DynamicCast_AsBP_Control_Saves                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::AddKeyToSave(class UInputMappingContext* MappingContext, const struct FEnhancedActionKeyMapping& KeyAction, class UObject* __WorldContext, class UBP_ControlSaves_C* SaveL, class UBP_ControlSaves_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UBP_ControlSaves_C* K2Node_DynamicCast_AsBP_Control_Saves, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "AddKeyToSave");

	Params::UBP_SGKFunctions_C_AddKeyToSave_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.KeyAction = KeyAction;
	Parms.__WorldContext = __WorldContext;
	Parms.SaveL = SaveL;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Control_Saves = K2Node_DynamicCast_AsBP_Control_Saves;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GridClasses
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_BuildType             BuildType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Grid                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_BuildType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_3                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_4                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_5                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_6                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_7                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_8                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_9                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_10                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_11                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_12                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_GridClasses(enum class E_BuildType BuildType, class UObject* __WorldContext, class UClass** Grid, enum class E_BuildType Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, class UClass* Temp_class_Variable_4, class UClass* Temp_class_Variable_5, class UClass* Temp_class_Variable_6, class UClass* Temp_class_Variable_7, class UClass* Temp_class_Variable_8, class UClass* Temp_class_Variable_9, class UClass* Temp_class_Variable_10, class UClass* Temp_class_Variable_11, class UClass* Temp_class_Variable_12, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK GridClasses");

	Params::UBP_SGKFunctions_C_SGK_GridClasses_Params Parms{};

	Parms.BuildType = BuildType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.Temp_class_Variable_4 = Temp_class_Variable_4;
	Parms.Temp_class_Variable_5 = Temp_class_Variable_5;
	Parms.Temp_class_Variable_6 = Temp_class_Variable_6;
	Parms.Temp_class_Variable_7 = Temp_class_Variable_7;
	Parms.Temp_class_Variable_8 = Temp_class_Variable_8;
	Parms.Temp_class_Variable_9 = Temp_class_Variable_9;
	Parms.Temp_class_Variable_10 = Temp_class_Variable_10;
	Parms.Temp_class_Variable_11 = Temp_class_Variable_11;
	Parms.Temp_class_Variable_12 = Temp_class_Variable_12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Grid != nullptr)
		*Grid = Parms.Grid;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK VectorTransform
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  InTransform                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Right                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Up                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_SGKFunctions_C::SGK_VectorTransform(struct FTransform& InTransform, double Forward, double Right, double Up, class UObject* __WorldContext, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK VectorTransform");

	Params::UBP_SGKFunctions_C_SGK_VectorTransform_Params Parms{};

	Parms.InTransform = InTransform;
	Parms.Forward = Forward;
	Parms.Right = Right;
	Parms.Up = Up;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemRepairCost
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CraftingCost             RepairItems                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             Durability                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max_Durability                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartPercentL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemRepairCost(const struct FS_CraftingCost& RepairItems, double Durability, double Max_Durability, class UObject* __WorldContext, int32* ItemCount, int32 StartPercentL, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemRepairCost");

	Params::UBP_SGKFunctions_C_SGK_ItemRepairCost_Params Parms{};

	Parms.RepairItems = RepairItems;
	Parms.Durability = Durability;
	Parms.Max_Durability = Max_Durability;
	Parms.__WorldContext = __WorldContext;
	Parms.StartPercentL = StartPercentL;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemCount != nullptr)
		*ItemCount = Parms.ItemCount;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK BuildPartRepairCost
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartPercent                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKDamageInterface_C>K2Node_DynamicCast_AsBP_SGKDamage_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_MaxHealth_MaxHealth                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKDamageInterface_C>K2Node_DynamicCast_AsBP_SGKDamage_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_CurrentHealth_Health                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_SGKFunctions_C::SGK_BuildPartRepairCost(class AActor* Actor, class UObject* __WorldContext, int32 StartPercent, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TScriptInterface<class IBP_SGKDamageInterface_C> K2Node_DynamicCast_AsBP_SGKDamage_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SGK_MaxHealth_MaxHealth, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, TScriptInterface<class IBP_SGKDamageInterface_C> K2Node_DynamicCast_AsBP_SGKDamage_Interface_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_SGK_CurrentHealth_Health, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK BuildPartRepairCost");

	Params::UBP_SGKFunctions_C_SGK_BuildPartRepairCost_Params Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.StartPercent = StartPercent;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKDamage_Interface = K2Node_DynamicCast_AsBP_SGKDamage_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SGK_MaxHealth_MaxHealth = CallFunc_SGK_MaxHealth_MaxHealth;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_SGKDamage_Interface_1 = K2Node_DynamicCast_AsBP_SGKDamage_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_CurrentHealth_Health = CallFunc_SGK_CurrentHealth_Health;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_FMod_Divisor_ImplicitCast = CallFunc_FMod_Divisor_ImplicitCast;
	Parms.CallFunc_FMod_Dividend_ImplicitCast = CallFunc_FMod_Dividend_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsHitbox
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_Hitbox                HitBox                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFoundBone_                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_BoneHitboxes>     BoneHitboxesL                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_BoneHitboxes>     K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BoneHitboxes             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_IsHitbox(class FName BoneName, class UObject* __WorldContext, enum class E_Hitbox* HitBox, bool bFoundBone_, const TArray<struct FS_BoneHitboxes>& BoneHitboxesL, int32 Temp_int_Array_Index_Variable, TArray<struct FS_BoneHitboxes>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, const struct FS_BoneHitboxes& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK IsHitbox");

	Params::UBP_SGKFunctions_C_SGK_IsHitbox_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.__WorldContext = __WorldContext;
	Parms.bFoundBone_ = bFoundBone_;
	Parms.BoneHitboxesL = BoneHitboxesL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HitBox != nullptr)
		*HitBox = Parms.HitBox;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK HitboxDamage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Damage>           HitboxDamage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class E_Hitbox                HitBox                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Damage                   ElementDamageL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Damage                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Damage                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_HitboxDamage(TArray<struct FS_Damage>& HitboxDamage, enum class E_Hitbox HitBox, class UObject* __WorldContext, int32* Damage, const struct FS_Damage& ElementDamageL, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_Damage& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_Damage& CallFunc_Array_Get_Item_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK HitboxDamage");

	Params::UBP_SGKFunctions_C_SGK_HitboxDamage_Params Parms{};

	Parms.HitboxDamage = HitboxDamage;
	Parms.HitBox = HitBox;
	Parms.__WorldContext = __WorldContext;
	Parms.ElementDamageL = ElementDamageL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AttachmentCompatibilityCheck
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  WeaponItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvItem                  AttachmentItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AllowAttachment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      WeaponL                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentDetails        AttachmentDetailsL                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSet<enum class E_AttachmentType>  Temp_byte_Variable                                               (None)
// TArray<class UClass*>              Temp_class_Variable                                              (ReferenceParm)
// TArray<class UClass*>              Temp_class_Variable_1                                            (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails_1                           (ContainsInstancedReference, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Master_Weapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AttachmentCompatibilityCheck(const struct FS_InvItem& WeaponItem, const struct FS_InvItem& AttachmentItem, class UObject* __WorldContext, bool* AllowAttachment, class UClass* WeaponL, const struct FS_AttachmentDetails& AttachmentDetailsL, TSet<enum class E_AttachmentType> Temp_byte_Variable, TArray<class UClass*>& Temp_class_Variable, TArray<class UClass*>& Temp_class_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, class UClass* K2Node_ClassDynamicCast_AsBP_Master_Weapon, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK AttachmentCompatibilityCheck");

	Params::UBP_SGKFunctions_C_SGK_AttachmentCompatibilityCheck_Params Parms{};

	Parms.WeaponItem = WeaponItem;
	Parms.AttachmentItem = AttachmentItem;
	Parms.__WorldContext = __WorldContext;
	Parms.WeaponL = WeaponL;
	Parms.AttachmentDetailsL = AttachmentDetailsL;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_ItemDetails_ItemFound_1 = CallFunc_SGK_ItemDetails_ItemFound_1;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails_1 = CallFunc_SGK_ItemDetails_ItemDetails_1;
	Parms.K2Node_ClassDynamicCast_AsBP_Master_Weapon = K2Node_ClassDynamicCast_AsBP_Master_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowAttachment != nullptr)
		*AllowAttachment = Parms.AllowAttachment;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK RootSpaceCheck
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  RootInvSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlotID                IgnoreItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Rotated                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SlotsBlocked                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlots                                                       (Parm, OutParm, ContainsInstancedReference)
// int32                              RootClumpL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InvColumnsL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       InventoryL                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              RootIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CurrentCellIndexL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CellHeightMultiL                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CellWidthMultiL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               SlotsBlockedL                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlotsL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InvSlotAmount_ItemValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_InvSlotAmount_Amount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_IsRootSlot_IsRootSlot_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_IsRootSlot_RootIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InvSlotAmount_ItemValid_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SGK_InvSlotAmount_Amount_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_RootSpaceCheck(const struct FS_InvSlot& RootInvSlot, int32 Height, int32 Width, const struct FS_InvSlotID& IgnoreItem, bool Rotated, class UObject* __WorldContext, bool* SlotsBlocked, TArray<struct FS_InvSlot>* FoundSlots, int32 RootClumpL, int32 InvColumnsL, class UBP_MasterInventory_C* InventoryL, int32 RootIndexL, const struct FS_InvSlot& InvSlotL, int32 CurrentCellIndexL, int32 CellHeightMultiL, int32 CellWidthMultiL, const TArray<struct FS_InvSlot>& FoundSlotsL, bool SlotsBlockedL, int32 TotalSlotsL, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SGK_IsRootSlot_IsRootSlot, int32 CallFunc_SGK_IsRootSlot_RootIndex, float CallFunc_Conv_IntToFloat_ReturnValue_6, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_3, double CallFunc_FMod_Remainder_1, int32 CallFunc_FMod_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_SGK_InvSlotAmount_ItemValid, int32 CallFunc_SGK_InvSlotAmount_Amount, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_Conv_IntToFloat_ReturnValue_9, double CallFunc_FMod_Remainder_2, int32 CallFunc_FMod_ReturnValue_2, double CallFunc_FMod_Remainder_3, int32 CallFunc_FMod_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_3, bool CallFunc_SGK_IsRootSlot_IsRootSlot_1, int32 CallFunc_SGK_IsRootSlot_RootIndex_1, float CallFunc_Conv_IntToFloat_ReturnValue_10, double CallFunc_FMod_Remainder_4, int32 CallFunc_FMod_ReturnValue_4, int32 CallFunc_Multiply_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, float CallFunc_Conv_IntToFloat_ReturnValue_11, double CallFunc_FMod_Remainder_5, int32 CallFunc_FMod_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, bool CallFunc_SGK_InvSlotAmount_ItemValid_1, int32 CallFunc_SGK_InvSlotAmount_Amount_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_13, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_6, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Divisor_ImplicitCast_1, double CallFunc_FMod_Divisor_ImplicitCast_2, double CallFunc_FMod_Divisor_ImplicitCast_3, double CallFunc_FMod_Divisor_ImplicitCast_4, double CallFunc_FMod_Divisor_ImplicitCast_5, double CallFunc_FMod_Dividend_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast_1, double CallFunc_FMod_Dividend_ImplicitCast_2, double CallFunc_FMod_Dividend_ImplicitCast_3, double CallFunc_FMod_Dividend_ImplicitCast_4, double CallFunc_FMod_Dividend_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK RootSpaceCheck");

	Params::UBP_SGKFunctions_C_SGK_RootSpaceCheck_Params Parms{};

	Parms.RootInvSlot = RootInvSlot;
	Parms.Height = Height;
	Parms.Width = Width;
	Parms.IgnoreItem = IgnoreItem;
	Parms.Rotated = Rotated;
	Parms.__WorldContext = __WorldContext;
	Parms.RootClumpL = RootClumpL;
	Parms.InvColumnsL = InvColumnsL;
	Parms.InventoryL = InventoryL;
	Parms.RootIndexL = RootIndexL;
	Parms.InvSlotL = InvSlotL;
	Parms.CurrentCellIndexL = CurrentCellIndexL;
	Parms.CellHeightMultiL = CellHeightMultiL;
	Parms.CellWidthMultiL = CellWidthMultiL;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.SlotsBlockedL = SlotsBlockedL;
	Parms.TotalSlotsL = TotalSlotsL;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot = CallFunc_SGK_IsRootSlot_IsRootSlot;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex = CallFunc_SGK_IsRootSlot_RootIndex;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_FMod_Remainder_1 = CallFunc_FMod_Remainder_1;
	Parms.CallFunc_FMod_ReturnValue_1 = CallFunc_FMod_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SGK_InvSlotAmount_ItemValid = CallFunc_SGK_InvSlotAmount_ItemValid;
	Parms.CallFunc_SGK_InvSlotAmount_Amount = CallFunc_SGK_InvSlotAmount_Amount;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.CallFunc_FMod_Remainder_2 = CallFunc_FMod_Remainder_2;
	Parms.CallFunc_FMod_ReturnValue_2 = CallFunc_FMod_ReturnValue_2;
	Parms.CallFunc_FMod_Remainder_3 = CallFunc_FMod_Remainder_3;
	Parms.CallFunc_FMod_ReturnValue_3 = CallFunc_FMod_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_3 = CallFunc_Multiply_IntInt_ReturnValue_3;
	Parms.CallFunc_SGK_IsRootSlot_IsRootSlot_1 = CallFunc_SGK_IsRootSlot_IsRootSlot_1;
	Parms.CallFunc_SGK_IsRootSlot_RootIndex_1 = CallFunc_SGK_IsRootSlot_RootIndex_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_10 = CallFunc_Conv_IntToFloat_ReturnValue_10;
	Parms.CallFunc_FMod_Remainder_4 = CallFunc_FMod_Remainder_4;
	Parms.CallFunc_FMod_ReturnValue_4 = CallFunc_FMod_ReturnValue_4;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_4 = CallFunc_Multiply_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_11 = CallFunc_Conv_IntToFloat_ReturnValue_11;
	Parms.CallFunc_FMod_Remainder_5 = CallFunc_FMod_Remainder_5;
	Parms.CallFunc_FMod_ReturnValue_5 = CallFunc_FMod_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SGK_InvSlotAmount_ItemValid_1 = CallFunc_SGK_InvSlotAmount_ItemValid_1;
	Parms.CallFunc_SGK_InvSlotAmount_Amount_1 = CallFunc_SGK_InvSlotAmount_Amount_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_8 = CallFunc_EqualEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_5 = CallFunc_Multiply_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_6 = CallFunc_Multiply_IntInt_ReturnValue_6;
	Parms.CallFunc_FMod_Divisor_ImplicitCast = CallFunc_FMod_Divisor_ImplicitCast;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_1 = CallFunc_FMod_Divisor_ImplicitCast_1;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_2 = CallFunc_FMod_Divisor_ImplicitCast_2;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_3 = CallFunc_FMod_Divisor_ImplicitCast_3;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_4 = CallFunc_FMod_Divisor_ImplicitCast_4;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_5 = CallFunc_FMod_Divisor_ImplicitCast_5;
	Parms.CallFunc_FMod_Dividend_ImplicitCast = CallFunc_FMod_Dividend_ImplicitCast;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_1 = CallFunc_FMod_Dividend_ImplicitCast_1;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_2 = CallFunc_FMod_Dividend_ImplicitCast_2;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_3 = CallFunc_FMod_Dividend_ImplicitCast_3;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_4 = CallFunc_FMod_Dividend_ImplicitCast_4;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_5 = CallFunc_FMod_Dividend_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotsBlocked != nullptr)
		*SlotsBlocked = Parms.SlotsBlocked;

	if (FoundSlots != nullptr)
		*FoundSlots = std::move(Parms.FoundSlots);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetails                                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ItemDetails* ItemDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemDetails != nullptr)
		*ItemDetails = std::move(Parms.ItemDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemAmmoDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AmmoDetails              ItemAmmoDetails                                                  (Parm, OutParm, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemAmmoDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_AmmoDetails* ItemAmmoDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemAmmoDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemAmmoDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemAmmoDetails != nullptr)
		*ItemAmmoDetails = std::move(Parms.ItemAmmoDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemContainerDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ContainerDetails         ItemContainerDetails                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemContainerDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ContainerDetails* ItemContainerDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemContainerDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemContainerDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemContainerDetails != nullptr)
		*ItemContainerDetails = std::move(Parms.ItemContainerDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InventoryGridDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         RowHandle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               FoundGrid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CustomGridLayoutData     InventoryGridData                                                (Parm, OutParm, HasGetValueTypeHash)
// struct FS_CustomGridLayoutData     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InventoryGridDetails(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext, bool* FoundGrid, struct FS_CustomGridLayoutData* InventoryGridData, const struct FS_CustomGridLayoutData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK InventoryGridDetails");

	Params::UBP_SGKFunctions_C_SGK_InventoryGridDetails_Params Parms{};

	Parms.RowHandle = RowHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundGrid != nullptr)
		*FoundGrid = Parms.FoundGrid;

	if (InventoryGridData != nullptr)
		*InventoryGridData = std::move(Parms.InventoryGridData);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK BuildPartDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        BuildPartID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               BuildPartFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         BuildPartDetails                                                 (Parm, OutParm, HasGetValueTypeHash)
// struct FS_BuildPartDetails         CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_BuildPartDetails(class FName BuildPartID, class UObject* __WorldContext, bool* BuildPartFound, struct FS_BuildPartDetails* BuildPartDetails, const struct FS_BuildPartDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK BuildPartDetails");

	Params::UBP_SGKFunctions_C_SGK_BuildPartDetails_Params Parms{};

	Parms.BuildPartID = BuildPartID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildPartFound != nullptr)
		*BuildPartFound = Parms.BuildPartFound;

	if (BuildPartDetails != nullptr)
		*BuildPartDetails = std::move(Parms.BuildPartDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemBuildPartDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         Build_Part_Details                                               (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_BuildPartDetails_BuildPartFound                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BuildPartDetails         CallFunc_SGK_BuildPartDetails_BuildPartDetails                   (HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemBuildPartDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_BuildPartDetails* Build_Part_Details, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemBuildPartDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemBuildPartDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartFound = CallFunc_SGK_BuildPartDetails_BuildPartFound;
	Parms.CallFunc_SGK_BuildPartDetails_BuildPartDetails = CallFunc_SGK_BuildPartDetails_BuildPartDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (Build_Part_Details != nullptr)
		*Build_Part_Details = std::move(Parms.Build_Part_Details);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemRecipeDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_RecipeDetails            ItemRecipeDetails                                                (Parm, OutParm, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemRecipeDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_RecipeDetails* ItemRecipeDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemRecipeDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemRecipeDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemRecipeDetails != nullptr)
		*ItemRecipeDetails = std::move(Parms.ItemRecipeDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemConsumableDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConsumableDetails        ItemDetails                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemConsumableDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_ConsumableDetails* ItemDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemConsumableDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemConsumableDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemDetails != nullptr)
		*ItemDetails = std::move(Parms.ItemDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK SlotItemDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              ItemDetails                                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_SlotItemDetails(class UBP_MasterInventory_C* Inventory, int32 Index, class UObject* __WorldContext, bool* ItemFound, struct FS_ItemDetails* ItemDetails, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK SlotItemDetails");

	Params::UBP_SGKFunctions_C_SGK_SlotItemDetails_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemDetails != nullptr)
		*ItemDetails = std::move(Parms.ItemDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemHoldableDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HoldableDetails          ItemHoldableDetails                                              (Parm, OutParm, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemHoldableDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_HoldableDetails* ItemHoldableDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemHoldableDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemHoldableDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemHoldableDetails != nullptr)
		*ItemHoldableDetails = std::move(Parms.ItemHoldableDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK DurabilityDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_DurabilityDetails        DurabilityDetails                                                (Parm, OutParm, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_DurabilityDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_DurabilityDetails* DurabilityDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK DurabilityDetails");

	Params::UBP_SGKFunctions_C_SGK_DurabilityDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (DurabilityDetails != nullptr)
		*DurabilityDetails = std::move(Parms.DurabilityDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemEquipmentDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  S_InvItem                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipmentItem                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentDetails         EquipmentDetails                                                 (Parm, OutParm, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemEquipmentDetails(struct FS_InvItem& S_InvItem, class UObject* __WorldContext, bool* IsEquipmentItem, struct FS_EquipmentDetails* EquipmentDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemEquipmentDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemEquipmentDetails_Params Parms{};

	Parms.S_InvItem = S_InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Set_Length_ReturnValue = CallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipmentItem != nullptr)
		*IsEquipmentItem = Parms.IsEquipmentItem;

	if (EquipmentDetails != nullptr)
		*EquipmentDetails = std::move(Parms.EquipmentDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemUIDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_UIDetails                ItemUIDetails                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemUIDetails(const struct FS_InvItem& InvItem, class UObject* __WorldContext, bool* ItemFound, struct FS_UIDetails* ItemUIDetails, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemUIDetails");

	Params::UBP_SGKFunctions_C_SGK_ItemUIDetails_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (ItemUIDetails != nullptr)
		*ItemUIDetails = std::move(Parms.ItemUIDetails);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AttachmentDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Attachment                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentDetails        Attachment_Details                                               (Parm, OutParm, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AttachmentDetails(const struct FS_InvItem& Item, class UObject* __WorldContext, bool* Is_Attachment, struct FS_AttachmentDetails* Attachment_Details, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK AttachmentDetails");

	Params::UBP_SGKFunctions_C_SGK_AttachmentDetails_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Attachment != nullptr)
		*Is_Attachment = Parms.Is_Attachment;

	if (Attachment_Details != nullptr)
		*Attachment_Details = std::move(Parms.Attachment_Details);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK RecipeDetails
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeRowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CraftingRecipe                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FS_CraftingRecipe           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_RecipeDetails(class FName RecipeRowName, class UObject* __WorldContext, struct FS_CraftingRecipe* CraftingRecipe, const struct FS_CraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK RecipeDetails");

	Params::UBP_SGKFunctions_C_SGK_RecipeDetails_Params Parms{};

	Parms.RecipeRowName = RecipeRowName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftingRecipe != nullptr)
		*CraftingRecipe = std::move(Parms.CraftingRecipe);

	return Parms.ReturnValue;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  Inv_Slot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  InvItem                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotItem(const struct FS_InvSlot& Inv_Slot, class UObject* __WorldContext, struct FS_InvItem* InvItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK InvSlotItem");

	Params::UBP_SGKFunctions_C_SGK_InvSlotItem_Params Parms{};

	Parms.Inv_Slot = Inv_Slot;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (InvItem != nullptr)
		*InvItem = std::move(Parms.InvItem);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemCookingRecipe
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class E_CookingType           CookingType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingRecipe            CookingRecipe                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FS_CookingRecipe            CookingRecipeL                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingRecipe            CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_ItemCookingRecipe(const struct FS_InvItem& Item, enum class E_CookingType CookingType, class UObject* __WorldContext, struct FS_CookingRecipe* CookingRecipe, const struct FS_CookingRecipe& CookingRecipeL, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_CookingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemCookingRecipe");

	Params::UBP_SGKFunctions_C_SGK_ItemCookingRecipe_Params Parms{};

	Parms.Item = Item;
	Parms.CookingType = CookingType;
	Parms.__WorldContext = __WorldContext;
	Parms.CookingRecipeL = CookingRecipeL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CookingRecipe != nullptr)
		*CookingRecipe = std::move(Parms.CookingRecipe);

	return Parms.ReturnValue;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetItemWeaponClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      RangeWeapon                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      HoldableClassL                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Master_Weapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_GetItemWeaponClass(const struct FS_InvItem& Item, class UObject* __WorldContext, class UClass** RangeWeapon, class UClass* HoldableClassL, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Master_Weapon, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK GetItemWeaponClass");

	Params::UBP_SGKFunctions_C_SGK_GetItemWeaponClass_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.HoldableClassL = HoldableClassL;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_Master_Weapon = K2Node_ClassDynamicCast_AsBP_Master_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (RangeWeapon != nullptr)
		*RangeWeapon = Parms.RangeWeapon;

	return Parms.ReturnValue;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetItemRangeClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      RangeWeapon                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      HoldableClassL                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

bool UBP_SGKFunctions_C::SGK_GetItemRangeClass(const struct FS_InvItem& Item, class UObject* __WorldContext, class UClass** RangeWeapon, class UClass* HoldableClassL, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK GetItemRangeClass");

	Params::UBP_SGKFunctions_C_SGK_GetItemRangeClass_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.HoldableClassL = HoldableClassL;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon = K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (RangeWeapon != nullptr)
		*RangeWeapon = Parms.RangeWeapon;

	return Parms.ReturnValue;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemWeight
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             TotalWeight                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemWeight(const struct FS_InvItem& Item, class UObject* __WorldContext, double* TotalWeight, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemWeight");

	Params::UBP_SGKFunctions_C_SGK_ItemWeight_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalWeight != nullptr)
		*TotalWeight = Parms.TotalWeight;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsSlotsSameItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  SlotOne                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  SlotTwo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSameItem                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_IsSlotsSameItem(const struct FS_InvSlot& SlotOne, const struct FS_InvSlot& SlotTwo, class UObject* __WorldContext, bool* IsSameItem, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK IsSlotsSameItem");

	Params::UBP_SGKFunctions_C_SGK_IsSlotsSameItem_Params Parms{};

	Parms.SlotOne = SlotOne;
	Parms.SlotTwo = SlotTwo;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSameItem != nullptr)
		*IsSameItem = Parms.IsSameItem;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK ItemSize
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvItem                  InvItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_ItemSize(const struct FS_InvItem& InvItem, class UObject* __WorldContext, int32* Height, int32* Width, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK ItemSize");

	Params::UBP_SGKFunctions_C_SGK_ItemSize_Params Parms{};

	Parms.InvItem = InvItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Width != nullptr)
		*Width = Parms.Width;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetRootSlot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  RootInvSlot                                                      (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_GetRootSlot(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, struct FS_InvSlot* RootInvSlot, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK GetRootSlot");

	Params::UBP_SGKFunctions_C_SGK_GetRootSlot_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (RootInvSlot != nullptr)
		*RootInvSlot = std::move(Parms.RootInvSlot);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK AllowStacking
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               AllowStacking                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_AllowStacking(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* AllowStacking, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK AllowStacking");

	Params::UBP_SGKFunctions_C_SGK_AllowStacking_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowStacking != nullptr)
		*AllowStacking = Parms.AllowStacking;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsRootSlot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  Inv_Slot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsRootSlot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RootIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_IsRootSlot(const struct FS_InvSlot& Inv_Slot, class UObject* __WorldContext, bool* IsRootSlot, int32* RootIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK IsRootSlot");

	Params::UBP_SGKFunctions_C_SGK_IsRootSlot_Params Parms{};

	Parms.Inv_Slot = Inv_Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRootSlot != nullptr)
		*IsRootSlot = Parms.IsRootSlot;

	if (RootIndex != nullptr)
		*RootIndex = Parms.RootIndex;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK SlotFinder
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlot                  RootInvSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rotated                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlots                                                       (Parm, OutParm, ContainsInstancedReference)
// int32                              InvColumnsL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSlot>          FoundSlotsL                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CurrentCellIndexL                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CellHeightMultiL                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CellWidthMultiL                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlotsL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RootIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       InventoryL                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Remainder_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Divisor_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMod_Dividend_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_SlotFinder(const struct FS_InvSlot& RootInvSlot, int32 Height, int32 Width, bool Rotated, class UObject* __WorldContext, TArray<struct FS_InvSlot>* FoundSlots, int32 InvColumnsL, const struct FS_InvSlot& InvSlotL, const TArray<struct FS_InvSlot>& FoundSlotsL, int32 CurrentCellIndexL, int32 CellHeightMultiL, int32 CellWidthMultiL, int32 TotalSlotsL, int32 RootIndexL, class UBP_MasterInventory_C* InventoryL, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, double CallFunc_FMod_Remainder_1, int32 CallFunc_FMod_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_2, double CallFunc_FMod_Divisor_ImplicitCast, double CallFunc_FMod_Divisor_ImplicitCast_1, double CallFunc_FMod_Dividend_ImplicitCast, double CallFunc_FMod_Dividend_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK SlotFinder");

	Params::UBP_SGKFunctions_C_SGK_SlotFinder_Params Parms{};

	Parms.RootInvSlot = RootInvSlot;
	Parms.Height = Height;
	Parms.Width = Width;
	Parms.Rotated = Rotated;
	Parms.__WorldContext = __WorldContext;
	Parms.InvColumnsL = InvColumnsL;
	Parms.InvSlotL = InvSlotL;
	Parms.FoundSlotsL = FoundSlotsL;
	Parms.CurrentCellIndexL = CurrentCellIndexL;
	Parms.CellHeightMultiL = CellHeightMultiL;
	Parms.CellWidthMultiL = CellWidthMultiL;
	Parms.TotalSlotsL = TotalSlotsL;
	Parms.RootIndexL = RootIndexL;
	Parms.InventoryL = InventoryL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_FMod_Remainder_1 = CallFunc_FMod_Remainder_1;
	Parms.CallFunc_FMod_ReturnValue_1 = CallFunc_FMod_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_FMod_Divisor_ImplicitCast = CallFunc_FMod_Divisor_ImplicitCast;
	Parms.CallFunc_FMod_Divisor_ImplicitCast_1 = CallFunc_FMod_Divisor_ImplicitCast_1;
	Parms.CallFunc_FMod_Dividend_ImplicitCast = CallFunc_FMod_Dividend_ImplicitCast;
	Parms.CallFunc_FMod_Dividend_ImplicitCast_1 = CallFunc_FMod_Dividend_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundSlots != nullptr)
		*FoundSlots = std::move(Parms.FoundSlots);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotFromSlotID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_InvSlotID                SlotID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlot                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SGK_GetInvSlot_SlotFound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_SGK_GetInvSlot_InvSlot                                  (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotFromSlotID(const struct FS_InvSlotID& SlotID, class UObject* __WorldContext, struct FS_InvSlot* InvSlot, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK InvSlotFromSlotID");

	Params::UBP_SGKFunctions_C_SGK_InvSlotFromSlotID_Params Parms{};

	Parms.SlotID = SlotID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_GetInvSlot_SlotFound = CallFunc_SGK_GetInvSlot_SlotFound;
	Parms.CallFunc_SGK_GetInvSlot_InvSlot = CallFunc_SGK_GetInvSlot_InvSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (InvSlot != nullptr)
		*InvSlot = std::move(Parms.InvSlot);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotOccupied
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Occupied                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotOccupied(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* Occupied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK InvSlotOccupied");

	Params::UBP_SGKFunctions_C_SGK_InvSlotOccupied_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Occupied != nullptr)
		*Occupied = Parms.Occupied;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK GetInvSlot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_MasterInventory_C*       MasterInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SlotFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlot                                                          (Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_GetInvSlot(class UBP_MasterInventory_C* MasterInventory, int32 Index, class UObject* __WorldContext, bool* SlotFound, struct FS_InvSlot* InvSlot, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK GetInvSlot");

	Params::UBP_SGKFunctions_C_SGK_GetInvSlot_Params Parms{};

	Parms.MasterInventory = MasterInventory;
	Parms.Index = Index;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotFound != nullptr)
		*SlotFound = Parms.SlotFound;

	if (InvSlot != nullptr)
		*InvSlot = std::move(Parms.InvSlot);

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK InvSlotAmount
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_InvSlotAmount(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* ItemValid, int32* Amount, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK InvSlotAmount");

	Params::UBP_SGKFunctions_C_SGK_InvSlotAmount_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemValid != nullptr)
		*ItemValid = Parms.ItemValid;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function BP_SGKFunctions.BP_SGKFunctions_C.SGK IsMaxAmount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_InvSlot                  InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               MaxCount                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_ItemDetails_ItemFound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemDetails              CallFunc_SGK_ItemDetails_ItemDetails                             (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKFunctions_C::SGK_IsMaxAmount(const struct FS_InvSlot& InvSlot, class UObject* __WorldContext, bool* MaxCount, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKFunctions_C", "SGK IsMaxAmount");

	Params::UBP_SGKFunctions_C_SGK_IsMaxAmount_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SGK_ItemDetails_ItemFound = CallFunc_SGK_ItemDetails_ItemFound;
	Parms.CallFunc_SGK_ItemDetails_ItemDetails = CallFunc_SGK_ItemDetails_ItemDetails;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxCount != nullptr)
		*MaxCount = Parms.MaxCount;

}

}


