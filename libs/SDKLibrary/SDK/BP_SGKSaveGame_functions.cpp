#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SGKSaveGame.BP_SGKSaveGame_C
// (None)

class UClass* UBP_SGKSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SGKSaveGame_C");

	return Clss;
}


// BP_SGKSaveGame_C BP_SGKSaveGame.Default__BP_SGKSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SGKSaveGame_C* UBP_SGKSaveGame_C::GetDefaultObj()
{
	static class UBP_SGKSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SGKSaveGame_C*>(UBP_SGKSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareRespawnNameData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_LevelSaveData            LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            SaveData                                                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              SaveIndex                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelDataL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareRespawnNameData(class FText Name, const struct FS_LevelSaveData& LevelData, struct FS_LevelSaveData* SaveData, int32* SaveIndex, const struct FS_LevelSaveData& LevelDataL, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "PrepareRespawnNameData");

	Params::UBP_SGKSaveGame_C_PrepareRespawnNameData_Params Parms{};

	Parms.Name = Name;
	Parms.LevelData = LevelData;
	Parms.LevelDataL = LevelDataL;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveData != nullptr)
		*SaveData = std::move(Parms.SaveData);

	if (SaveIndex != nullptr)
		*SaveIndex = Parms.SaveIndex;

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindCookingSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingSave              Array_Element                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CookingSave              CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindCookingSaveData(const struct FTransform& Transform, const class FString& LevelName, bool* SaveFound, struct FS_CookingSave* Array_Element, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_CookingSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindCookingSaveData");

	Params::UBP_SGKSaveGame_C_FindCookingSaveData_Params Parms{};

	Parms.Transform = Transform;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindItemSpawnerSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterItemSpawner_C*     ItemSpawner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_ItemSpawnerSave>  ItemSpawnerSaves                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MasterItemSave           Item                                                             (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemSpawnerSave          CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SGKSaveGame_C::FindItemSpawnerSaveData(class ABP_MasterItemSpawner_C* ItemSpawner, TArray<struct FS_ItemSpawnerSave>& ItemSpawnerSaves, struct FS_MasterItemSave* Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_ItemSpawnerSave& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindItemSpawnerSaveData");

	Params::UBP_SGKSaveGame_C_FindItemSpawnerSaveData_Params Parms{};

	Parms.ItemSpawner = ItemSpawner;
	Parms.ItemSpawnerSaves = ItemSpawnerSaves;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

	return Parms.ReturnValue;

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindPlayerSave
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               PlayerSave                                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_SGKSaveGame_C::FindPlayerSave(class FText PlayerName, struct FS_PlayerSave* PlayerSave, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_PlayerSave& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindPlayerSave");

	Params::UBP_SGKSaveGame_C_FindPlayerSave_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerSave != nullptr)
		*PlayerSave = std::move(Parms.PlayerSave);

	return Parms.ReturnValue;

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindSpecificResourceSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ResourceLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ResourceRemoved                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResourceAmount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindResourceSaveData_SaveFound                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_ResourcesSaves>   CallFunc_FindResourceSaveData_RemovedResources                   (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ResourcesSaves           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindSpecificResourceSaveData(const struct FVector& ResourceLocation, const class FString& LevelName, bool* ResourceRemoved, int32* ResourceAmount, bool CallFunc_FindResourceSaveData_SaveFound, TArray<struct FS_ResourcesSaves>& CallFunc_FindResourceSaveData_RemovedResources, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_ResourcesSaves& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindSpecificResourceSaveData");

	Params::UBP_SGKSaveGame_C_FindSpecificResourceSaveData_Params Parms{};

	Parms.ResourceLocation = ResourceLocation;
	Parms.LevelName = LevelName;
	Parms.CallFunc_FindResourceSaveData_SaveFound = CallFunc_FindResourceSaveData_SaveFound;
	Parms.CallFunc_FindResourceSaveData_RemovedResources = CallFunc_FindResourceSaveData_RemovedResources;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResourceRemoved != nullptr)
		*ResourceRemoved = Parms.ResourceRemoved;

	if (ResourceAmount != nullptr)
		*ResourceAmount = Parms.ResourceAmount;

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindEquipmentSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentInvSave         Array_Element                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentInvSave         CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindEquipmentSaveData(const struct FTransform& Transform, const class FString& LevelName, bool* SaveFound, struct FS_EquipmentInvSave* Array_Element, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_EquipmentInvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindEquipmentSaveData");

	Params::UBP_SGKSaveGame_C_FindEquipmentSaveData_Params Parms{};

	Parms.Transform = Transform;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindVenderSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorSave               Array_Element                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_VendorSave               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindVenderSaveData(const struct FTransform& Transform, const class FString& LevelName, bool* SaveFound, struct FS_VendorSave* Array_Element, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_VendorSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindVenderSaveData");

	Params::UBP_SGKSaveGame_C_FindVenderSaveData_Params Parms{};

	Parms.Transform = Transform;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindResourceSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_ResourcesSaves>   RemovedResources                                                 (Parm, OutParm)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindResourceSaveData(const class FString& LevelName, bool* SaveFound, TArray<struct FS_ResourcesSaves>* RemovedResources, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindResourceSaveData");

	Params::UBP_SGKSaveGame_C_FindResourceSaveData_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (RemovedResources != nullptr)
		*RemovedResources = std::move(Parms.RemovedResources);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindCraftingSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingSave             Array_Element                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CraftingSave             CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindCraftingSaveData(const struct FTransform& Transform, const class FString& LevelName, bool* SaveFound, struct FS_CraftingSave* Array_Element, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_CraftingSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindCraftingSaveData");

	Params::UBP_SGKSaveGame_C_FindCraftingSaveData_Params Parms{};

	Parms.Transform = Transform;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SelectLevelSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SelectLevelSaveData(const class FString& LevelName, bool* SaveFound, struct FS_LevelSaveData* LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LevelSaveData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SelectLevelSaveData");

	Params::UBP_SGKSaveGame_C_SelectLevelSaveData_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (LevelSaveData != nullptr)
		*LevelSaveData = std::move(Parms.LevelSaveData);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.DeletePlayerSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RespawnName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SaveIndexL                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SGKSaveGame_C*           SaveDataL                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               K2Node_MakeStruct_S_PlayerSave                                   (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::DeletePlayerSave(class FText PlayerName, class FText RespawnName, int32 SaveIndexL, class UBP_SGKSaveGame_C* SaveDataL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_PlayerSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_PlayerSave& K2Node_MakeStruct_S_PlayerSave, bool CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "DeletePlayerSave");

	Params::UBP_SGKSaveGame_C_DeletePlayerSave_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.RespawnName = RespawnName;
	Parms.SaveIndexL = SaveIndexL;
	Parms.SaveDataL = SaveDataL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_PlayerSave = K2Node_MakeStruct_S_PlayerSave;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.ClearLevelSaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            ArrayElementL                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::ClearLevelSaveData(const class FString& LevelName, const struct FS_LevelSaveData& ArrayElementL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FS_LevelSaveData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "ClearLevelSaveData");

	Params::UBP_SGKSaveGame_C_ClearLevelSaveData_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.ArrayElementL = ArrayElementL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SavePlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PlayerInventory_C*       PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipmentType         EquipmentSlotL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               PlayerSaveL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WeaponSlotSave>   CallFunc_SaveWeaponSlots_WeaponSaveSlots                         (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_SaveWeaponSlots_NewOtherInventories                     (ReferenceParm, ContainsInstancedReference)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_2                                        (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_EquipmentSlotSave>CallFunc_SaveEquipmentSlots_EquipmentSaveSlots                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_SaveEquipmentSlots_NewOtherInventories                  (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_PlayerSave               CallFunc_Array_Get_Item_3                                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SavePlayerInventory(class UBP_PlayerInventory_C* PlayerInventory, const class FString& Level, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_OtherInvSaves& CurrentInvL, const struct FS_InvSlot& InvSlotL, const struct FS_InvSaveSlot& NewInvSlotElementL, enum class E_EquipmentType EquipmentSlotL, const struct FS_PlayerSave& PlayerSaveL, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_InvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FS_InvSave& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, TArray<struct FS_WeaponSlotSave>& CallFunc_SaveWeaponSlots_WeaponSaveSlots, TArray<struct FS_InvSave>& CallFunc_SaveWeaponSlots_NewOtherInventories, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsValid_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue_3, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FS_EquipmentSlotSave>& CallFunc_SaveEquipmentSlots_EquipmentSaveSlots, TArray<struct FS_InvSave>& CallFunc_SaveEquipmentSlots_NewOtherInventories, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, const struct FS_PlayerSave& CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue, float K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast, float K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast, float K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast_1, float K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast_1, float K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SavePlayerInventory");

	Params::UBP_SGKSaveGame_C_SavePlayerInventory_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.Level = Level;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.InvSlotL = InvSlotL;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.EquipmentSlotL = EquipmentSlotL;
	Parms.PlayerSaveL = PlayerSaveL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.CallFunc_SaveWeaponSlots_WeaponSaveSlots = CallFunc_SaveWeaponSlots_WeaponSaveSlots;
	Parms.CallFunc_SaveWeaponSlots_NewOtherInventories = CallFunc_SaveWeaponSlots_NewOtherInventories;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SaveEquipmentSlots_EquipmentSaveSlots = CallFunc_SaveEquipmentSlots_EquipmentSaveSlots;
	Parms.CallFunc_SaveEquipmentSlots_NewOtherInventories = CallFunc_SaveEquipmentSlots_NewOtherInventories;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast = K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast = K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast = K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_28_81F8C4F94AD84C2E425B36A6FC854E5C_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast_1 = K2Node_SetFieldsInStruct_Thirst_17_9B044EEA4D744C2F562AB09D11A847C3_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast_1 = K2Node_SetFieldsInStruct_Hunger_16_FF58932045F381E520BF3C8FEB9C8D48_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.GatherInventoryData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_InvSlot>          Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSave>          Otherinventories                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSaveSlot>      InventorySaveData                                                (Parm, OutParm)
// TArray<struct FS_InvSave>          NewOtherInventories                                              (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct FS_InvSaveSlot>      InventorySaveL                                                   (Edit, BlueprintVisible)
// int32                              NewOtherInventorySaveIndexL                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSaveSlotL                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::GatherInventoryData(TArray<struct FS_InvSlot>& Inventory, TArray<struct FS_InvSave>& Otherinventories, TArray<struct FS_InvSaveSlot>* InventorySaveData, TArray<struct FS_InvSave>* NewOtherInventories, const TArray<struct FS_InvSave>& OtherInventorySavesL, const TArray<struct FS_InvSaveSlot>& InventorySaveL, int32 NewOtherInventorySaveIndexL, const struct FS_InvSaveSlot& NewInvSaveSlotL, const struct FS_InvSlot& InvSlotL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "GatherInventoryData");

	Params::UBP_SGKSaveGame_C_GatherInventoryData_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Otherinventories = Otherinventories;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.InventorySaveL = InventorySaveL;
	Parms.NewOtherInventorySaveIndexL = NewOtherInventorySaveIndexL;
	Parms.NewInvSaveSlotL = NewInvSaveSlotL;
	Parms.InvSlotL = InvSlotL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventorySaveData != nullptr)
		*InventorySaveData = std::move(Parms.InventorySaveData);

	if (NewOtherInventories != nullptr)
		*NewOtherInventories = std::move(Parms.NewOtherInventories);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveResourceInstanceData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     RemovedInstances                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ResourcesSaves           K2Node_MakeStruct_S_ResourcesSaves                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveResourceInstanceData(const struct FVector& RemovedInstances, int32 Amount, const class FString& LevelName, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, const struct FS_ResourcesSaves& K2Node_MakeStruct_S_ResourcesSaves, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SaveResourceInstanceData");

	Params::UBP_SGKSaveGame_C_SaveResourceInstanceData_Params Parms{};

	Parms.RemovedInstances = RemovedInstances;
	Parms.Amount = Amount;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.K2Node_MakeStruct_S_ResourcesSaves = K2Node_MakeStruct_S_ResourcesSaves;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.GatherAttachmentData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_WeaponInventory_C*       WeaponInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySaves                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSave>          OtherInventorySavesL1                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>AttachmentSaveSlotsL1                                            (Parm, OutParm)
// TArray<struct FS_AttachmentSaveSlot>AttachmentSaveSlotsL                                             (Edit, BlueprintVisible)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_AttachmentSlot           AttachmentSlotL                                                  (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_AttachmentSaveSlot       AttachmentSaveSlotL                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAttachmentItem_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_AttachmentSlot           CallFunc_SelectAttachmentItem_ReturnValue                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::GatherAttachmentData(class UBP_WeaponInventory_C* WeaponInventory, TArray<struct FS_InvSave>& OtherInventorySaves, TArray<struct FS_InvSave>* OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>* AttachmentSaveSlotsL1, const TArray<struct FS_AttachmentSaveSlot>& AttachmentSaveSlotsL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_AttachmentSlot& AttachmentSlotL, const struct FS_AttachmentSaveSlot& AttachmentSaveSlotL, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "GatherAttachmentData");

	Params::UBP_SGKSaveGame_C_GatherAttachmentData_Params Parms{};

	Parms.WeaponInventory = WeaponInventory;
	Parms.OtherInventorySaves = OtherInventorySaves;
	Parms.AttachmentSaveSlotsL = AttachmentSaveSlotsL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.AttachmentSlotL = AttachmentSlotL;
	Parms.AttachmentSaveSlotL = AttachmentSaveSlotL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectAttachmentItem_IsValid = CallFunc_SelectAttachmentItem_IsValid;
	Parms.CallFunc_SelectAttachmentItem_ReturnValue = CallFunc_SelectAttachmentItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OtherInventorySavesL1 != nullptr)
		*OtherInventorySavesL1 = std::move(Parms.OtherInventorySavesL1);

	if (AttachmentSaveSlotsL1 != nullptr)
		*AttachmentSaveSlotsL1 = std::move(Parms.AttachmentSaveSlotsL1);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SetLevelData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_LevelSaveData            SaveData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            ArrayElementL                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              IndexL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SetLevelData(const struct FS_LevelSaveData& SaveData, const struct FS_LevelSaveData& ArrayElementL, int32 IndexL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_LevelSaveData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SetLevelData");

	Params::UBP_SGKSaveGame_C_SetLevelData_Params Parms{};

	Parms.SaveData = SaveData;
	Parms.ArrayElementL = ArrayElementL;
	Parms.IndexL = IndexL;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareCookingSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_CookingSave              CookingSaveDataL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CookingComponent_C*      K2Node_DynamicCast_AsBP_Cooking_Component                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareCookingSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_OtherInvSaves& CurrentInvL, const struct FS_InvSlot& InvSlotL, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_CookingSave& CookingSaveDataL, const struct FS_LevelSaveData& LevelSaveDataL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_CookingComponent_C* K2Node_DynamicCast_AsBP_Cooking_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "PrepareCookingSaveData");

	Params::UBP_SGKSaveGame_C_PrepareCookingSaveData_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.LevelSaveData = LevelSaveData;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.InvSlotL = InvSlotL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.CookingSaveDataL = CookingSaveDataL;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Cooking_Component = K2Node_DynamicCast_AsBP_Cooking_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast = K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareCraftingSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_CraftingSave             CookingSaveDataL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     K2Node_DynamicCast_AsBP_Crafting_Component                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareCraftingSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_OtherInvSaves& CurrentInvL, const struct FS_InvSlot& InvSlotL, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_CraftingSave& CookingSaveDataL, const struct FS_LevelSaveData& LevelSaveDataL, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_CraftingComponent_C* K2Node_DynamicCast_AsBP_Crafting_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "PrepareCraftingSaveData");

	Params::UBP_SGKSaveGame_C_PrepareCraftingSaveData_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.LevelSaveData = LevelSaveData;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.InvSlotL = InvSlotL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.CookingSaveDataL = CookingSaveDataL;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Crafting_Component = K2Node_DynamicCast_AsBP_Crafting_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast = K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareEquipmentSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C*    EquipmentInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_EquipmentInvSave         EquipmentSaveL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WeaponSlotSave>   CallFunc_SaveWeaponSlots_WeaponSaveSlots                         (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_SaveWeaponSlots_NewOtherInventories                     (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_EquipmentSlotSave>CallFunc_SaveEquipmentSlots_EquipmentSaveSlots                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_SaveEquipmentSlots_NewOtherInventories                  (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_29_E700207B48B6F5A4F54D2983B570F96D_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareEquipmentSaveData(class UBP_EquipmentInventory_C* EquipmentInventory, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, const struct FS_LevelSaveData& LevelSaveDataL, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_InvSlot& InvSlotL, const struct FS_OtherInvSaves& CurrentInvL, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_EquipmentInvSave& EquipmentSaveL, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FS_WeaponSlotSave>& CallFunc_SaveWeaponSlots_WeaponSaveSlots, TArray<struct FS_InvSave>& CallFunc_SaveWeaponSlots_NewOtherInventories, TArray<struct FS_EquipmentSlotSave>& CallFunc_SaveEquipmentSlots_EquipmentSaveSlots, TArray<struct FS_InvSave>& CallFunc_SaveEquipmentSlots_NewOtherInventories, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_29_E700207B48B6F5A4F54D2983B570F96D_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "PrepareEquipmentSaveData");

	Params::UBP_SGKSaveGame_C_PrepareEquipmentSaveData_Params Parms{};

	Parms.EquipmentInventory = EquipmentInventory;
	Parms.LevelSaveData = LevelSaveData;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.InvSlotL = InvSlotL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.EquipmentSaveL = EquipmentSaveL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SaveWeaponSlots_WeaponSaveSlots = CallFunc_SaveWeaponSlots_WeaponSaveSlots;
	Parms.CallFunc_SaveWeaponSlots_NewOtherInventories = CallFunc_SaveWeaponSlots_NewOtherInventories;
	Parms.CallFunc_SaveEquipmentSlots_EquipmentSaveSlots = CallFunc_SaveEquipmentSlots_EquipmentSaveSlots;
	Parms.CallFunc_SaveEquipmentSlots_NewOtherInventories = CallFunc_SaveEquipmentSlots_NewOtherInventories;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_29_E700207B48B6F5A4F54D2983B570F96D_ImplicitCast = K2Node_SetFieldsInStruct_Weight_29_E700207B48B6F5A4F54D2983B570F96D_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareVenderSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_VendorSave               CookingSaveDataL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_VendorComponent_C*       K2Node_DynamicCast_AsBP_Vendor_Component                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_CurrentRestockTime_7_E0221E3246F85F7AD9EB15A37A6C21F3_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareVenderSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_OtherInvSaves& CurrentInvL, const struct FS_InvSlot& InvSlotL, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_VendorSave& CookingSaveDataL, const struct FS_LevelSaveData& LevelSaveDataL, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_VendorComponent_C* K2Node_DynamicCast_AsBP_Vendor_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float K2Node_SetFieldsInStruct_CurrentRestockTime_7_E0221E3246F85F7AD9EB15A37A6C21F3_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "PrepareVenderSaveData");

	Params::UBP_SGKSaveGame_C_PrepareVenderSaveData_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.LevelSaveData = LevelSaveData;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.InvSlotL = InvSlotL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.CookingSaveDataL = CookingSaveDataL;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Vendor_Component = K2Node_DynamicCast_AsBP_Vendor_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_CurrentRestockTime_7_E0221E3246F85F7AD9EB15A37A6C21F3_ImplicitCast = K2Node_SetFieldsInStruct_CurrentRestockTime_7_E0221E3246F85F7AD9EB15A37A6C21F3_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast = K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.PrepareStorageSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterInventory_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              ExtraDataIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            NewLevelSaveData                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UBP_MasterInventory_C*>CheckedInvs                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySavesL                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_StorageSave              StorageSaveDataL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveDataL                                                   (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item_1                                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::PrepareStorageSaveData(class UBP_MasterInventory_C* Inventory, const struct FS_LevelSaveData& LevelSaveData, int32* ExtraDataIndex, struct FS_LevelSaveData* NewLevelSaveData, const TArray<class UBP_MasterInventory_C*>& CheckedInvs, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_OtherInvSaves& CurrentInvL, const struct FS_InvSlot& InvSlotL, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventorySavesL, const struct FS_StorageSave& StorageSaveDataL, const struct FS_LevelSaveData& LevelSaveDataL, bool CallFunc_IsValid_ReturnValue, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_InvSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FS_InvSlot& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_4, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "PrepareStorageSaveData");

	Params::UBP_SGKSaveGame_C_PrepareStorageSaveData_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.LevelSaveData = LevelSaveData;
	Parms.CheckedInvs = CheckedInvs;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.InvSlotL = InvSlotL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventorySavesL = OtherInventorySavesL;
	Parms.StorageSaveDataL = StorageSaveDataL;
	Parms.LevelSaveDataL = LevelSaveDataL;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast = K2Node_SetFieldsInStruct_Weight_20_58948A1040967D2B29D8A4A240AA4C79_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ExtraDataIndex != nullptr)
		*ExtraDataIndex = Parms.ExtraDataIndex;

	if (NewLevelSaveData != nullptr)
		*NewLevelSaveData = std::move(Parms.NewLevelSaveData);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.FindStorageSaveData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               SaveFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StorageSave              Array_Element                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_StorageSave              CallFunc_Array_Get_Item                                          (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::FindStorageSaveData(const struct FTransform& Transform, const class FString& LevelName, bool* SaveFound, struct FS_StorageSave* Array_Element, const struct FS_LevelSaveData& LevelSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_StorageSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "FindStorageSaveData");

	Params::UBP_SGKSaveGame_C_FindStorageSaveData_Params Parms{};

	Parms.Transform = Transform;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFound != nullptr)
		*SaveFound = Parms.SaveFound;

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FS_MasterItemSave>   ItemSavesL                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventoriesL                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_MasterItemSave           ItemSaveL                                                        (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1_1            (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1_1            (ReferenceParm)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterItemInventory_C*   K2Node_DynamicCast_AsBP_Master_Item_Inventory_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemSave                 K2Node_MakeStruct_S_ItemSave                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveItem(const struct FTransform& Transform, const struct FS_InvItem& Item, const class FString& LevelName, const TArray<struct FS_MasterItemSave>& ItemSavesL, const struct FS_LevelSaveData& LevelSaveL, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_OtherInvSaves& CurrentInvL, class UBP_MasterInventory_C* OtherInventoryL, const TArray<struct FS_InvSave>& OtherInventoriesL, const struct FS_InvSlot& InvSlotL, const struct FS_MasterItemSave& ItemSaveL, const struct FS_InvSave& Temp_struct_Variable, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1_1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_InvSave& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, bool CallFunc_IsValid_ReturnValue_2, class UBP_MasterItemInventory_C* K2Node_DynamicCast_AsBP_Master_Item_Inventory_1, bool K2Node_DynamicCast_bSuccess_3, const struct FS_ItemSave& K2Node_MakeStruct_S_ItemSave, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SaveItem");

	Params::UBP_SGKSaveGame_C_SaveItem_Params Parms{};

	Parms.Transform = Transform;
	Parms.Item = Item;
	Parms.LevelName = LevelName;
	Parms.ItemSavesL = ItemSavesL;
	Parms.LevelSaveL = LevelSaveL;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.OtherInventoriesL = OtherInventoriesL;
	Parms.InvSlotL = InvSlotL;
	Parms.ItemSaveL = ItemSaveL;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory_1 = K2Node_DynamicCast_AsBP_Weapon_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1_1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1_1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1_1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory = K2Node_DynamicCast_AsBP_Master_Item_Inventory;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Master_Item_Inventory_1 = K2Node_DynamicCast_AsBP_Master_Item_Inventory_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_MakeStruct_S_ItemSave = K2Node_MakeStruct_S_ItemSave;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast = K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveItemSpawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterItemSpawner_C*     ItemSpawner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            LevelSaveL                                                       (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              NewInvSlotElementL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  InvSlotL                                                         (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_OtherInvSaves            CurrentInvL                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// class UBP_MasterInventory_C*       OtherInventoryL                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_MasterItemSave           ItemSaveL                                                        (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventoriesL                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_InvItem                  ItemL                                                            (Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemSpawnerSave          ItemSpawnerSaveL                                                 (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SelectLevelSaveData_SaveFound                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LevelSaveData            CallFunc_SelectLevelSaveData_LevelSaveData                       (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_WeaponInventory_C*       K2Node_DynamicCast_AsBP_Weapon_Inventory                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSaveSlot>      CallFunc_GatherInventoryData_InventorySaveData                   (ReferenceParm)
// TArray<struct FS_InvSave>          CallFunc_GatherInventoryData_NewOtherInventories                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          CallFunc_GatherAttachmentData_OtherInventorySavesL1              (ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_AttachmentSaveSlot>CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1              (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSaveSlot              K2Node_MakeStruct_S_InvSaveSlot                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSlot                  CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_InvSave                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemSave                 K2Node_MakeStruct_S_ItemSave                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_SGKInteractionInterface_C>K2Node_DynamicCast_AsBP_SGKInteraction_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SGK_InvItem_IsItem                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvItem                  CallFunc_SGK_InvItem_InvItem                                     (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveItemSpawners(class ABP_MasterItemSpawner_C* ItemSpawner, const class FString& LevelName, const struct FS_LevelSaveData& LevelSaveL, const struct FS_InvSaveSlot& NewInvSlotElementL, const struct FS_InvSlot& InvSlotL, const struct FS_OtherInvSaves& CurrentInvL, class UBP_MasterInventory_C* OtherInventoryL, const struct FS_MasterItemSave& ItemSaveL, const TArray<struct FS_InvSave>& OtherInventoriesL, const struct FS_InvItem& ItemL, const struct FS_ItemSpawnerSave& ItemSpawnerSaveL, bool CallFunc_SelectLevelSaveData_SaveFound, const struct FS_LevelSaveData& CallFunc_SelectLevelSaveData_LevelSaveData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UBP_WeaponInventory_C* K2Node_DynamicCast_AsBP_Weapon_Inventory, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FS_InvSaveSlot>& CallFunc_GatherInventoryData_InventorySaveData, TArray<struct FS_InvSave>& CallFunc_GatherInventoryData_NewOtherInventories, int32 CallFunc_Array_Add_ReturnValue_2, TArray<struct FS_InvSave>& CallFunc_GatherAttachmentData_OtherInventorySavesL1, TArray<struct FS_AttachmentSaveSlot>& CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_Array_Add_ReturnValue_3, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, const struct FS_InvSaveSlot& K2Node_MakeStruct_S_InvSaveSlot, const struct FS_InvSlot& CallFunc_Array_Get_Item, const struct FS_InvSave& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, const struct FS_ItemSave& K2Node_MakeStruct_S_ItemSave, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_InvItem_IsItem, const struct FS_InvItem& CallFunc_SGK_InvItem_InvItem, bool CallFunc_IsValid_ReturnValue_3, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast, float K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1, float K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SaveItemSpawners");

	Params::UBP_SGKSaveGame_C_SaveItemSpawners_Params Parms{};

	Parms.ItemSpawner = ItemSpawner;
	Parms.LevelName = LevelName;
	Parms.LevelSaveL = LevelSaveL;
	Parms.NewInvSlotElementL = NewInvSlotElementL;
	Parms.InvSlotL = InvSlotL;
	Parms.CurrentInvL = CurrentInvL;
	Parms.OtherInventoryL = OtherInventoryL;
	Parms.ItemSaveL = ItemSaveL;
	Parms.OtherInventoriesL = OtherInventoriesL;
	Parms.ItemL = ItemL;
	Parms.ItemSpawnerSaveL = ItemSpawnerSaveL;
	Parms.CallFunc_SelectLevelSaveData_SaveFound = CallFunc_SelectLevelSaveData_SaveFound;
	Parms.CallFunc_SelectLevelSaveData_LevelSaveData = CallFunc_SelectLevelSaveData_LevelSaveData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Weapon_Inventory = K2Node_DynamicCast_AsBP_Weapon_Inventory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GatherInventoryData_InventorySaveData = CallFunc_GatherInventoryData_InventorySaveData;
	Parms.CallFunc_GatherInventoryData_NewOtherInventories = CallFunc_GatherInventoryData_NewOtherInventories;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GatherAttachmentData_OtherInventorySavesL1 = CallFunc_GatherAttachmentData_OtherInventorySavesL1;
	Parms.CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1 = CallFunc_GatherAttachmentData_AttachmentSaveSlotsL1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.K2Node_MakeStruct_S_InvSaveSlot = K2Node_MakeStruct_S_InvSaveSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_S_ItemSave = K2Node_MakeStruct_S_ItemSave;
	Parms.K2Node_DynamicCast_AsBP_SGKInteraction_Interface = K2Node_DynamicCast_AsBP_SGKInteraction_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SGK_InvItem_IsItem = CallFunc_SGK_InvItem_IsItem;
	Parms.CallFunc_SGK_InvItem_InvItem = CallFunc_SGK_InvItem_InvItem;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1 = K2Node_SetFieldsInStruct_Weight_10_CCDE912C4C18638DF464AF9EA6AB63AD_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast = K2Node_SetFieldsInStruct_Weight_28_046E24AE4E923DEA4D2ABEB7D4B9F144_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveWeaponSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C*    EquipmentInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySaves                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_WeaponSlotSave>   WeaponSaveSlots                                                  (Parm, OutParm)
// TArray<struct FS_InvSave>          NewOtherInventories                                              (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FS_InvSave>          CurrentInvSavesL                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_WeaponSlotSave           SaveWeaponSlotL                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_WeaponSlotSave>   WeaponSaveL                                                      (Edit, BlueprintVisible)
// enum class E_WeaponSlots           WeaponSlotL                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue                          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue_1                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_WeaponSlotSave           K2Node_MakeStruct_S_WeaponSlotSave                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_WeaponSlot               CallFunc_SelectedWeaponSlot_ReturnValue_2                        (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveWeaponSlots(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSave>& OtherInventorySaves, TArray<struct FS_WeaponSlotSave>* WeaponSaveSlots, TArray<struct FS_InvSave>* NewOtherInventories, const TArray<struct FS_InvSave>& CurrentInvSavesL, const struct FS_WeaponSlotSave& SaveWeaponSlotL, const TArray<struct FS_WeaponSlotSave>& WeaponSaveL, enum class E_WeaponSlots WeaponSlotL, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_1, const struct FS_WeaponSlotSave& K2Node_MakeStruct_S_WeaponSlotSave, bool CallFunc_IsValid_ReturnValue, const struct FS_InvSave& Temp_struct_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SaveWeaponSlots");

	Params::UBP_SGKSaveGame_C_SaveWeaponSlots_Params Parms{};

	Parms.EquipmentInventory = EquipmentInventory;
	Parms.OtherInventorySaves = OtherInventorySaves;
	Parms.CurrentInvSavesL = CurrentInvSavesL;
	Parms.SaveWeaponSlotL = SaveWeaponSlotL;
	Parms.WeaponSaveL = WeaponSaveL;
	Parms.WeaponSlotL = WeaponSlotL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue = CallFunc_SelectedWeaponSlot_ReturnValue;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue_1 = CallFunc_SelectedWeaponSlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_WeaponSlotSave = K2Node_MakeStruct_S_WeaponSlotSave;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_SelectedWeaponSlot_ReturnValue_2 = CallFunc_SelectedWeaponSlot_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponSaveSlots != nullptr)
		*WeaponSaveSlots = std::move(Parms.WeaponSaveSlots);

	if (NewOtherInventories != nullptr)
		*NewOtherInventories = std::move(Parms.NewOtherInventories);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveEquipmentSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_EquipmentInventory_C*    EquipmentInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_InvSave>          OtherInventorySaves                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FS_EquipmentSlotSave>EquipmentSaveSlots                                               (Parm, OutParm)
// TArray<struct FS_InvSave>          NewOtherInventories                                              (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FS_InvSave>          CurrentInvSavesL                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_EquipmentSlotSave        SaveEquipmentSlotL                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_EquipmentSlotSave>EquipmentSaveL                                                   (Edit, BlueprintVisible)
// enum class E_EquipmentType         EquipmentSlotL                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentSlot            CallFunc_SelectEquipmentSlot_ReturnValue                         (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EquipmentSlot            CallFunc_SelectEquipmentSlot_ReturnValue_1                       (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EquipmentSlotSave        K2Node_MakeStruct_S_EquipmentSlotSave                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckEquipmentSlot_SlotFull                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_InvSave                  K2Node_MakeStruct_S_InvSave                                      (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UBP_SGKSaveGame_C::SaveEquipmentSlots(class UBP_EquipmentInventory_C* EquipmentInventory, TArray<struct FS_InvSave>& OtherInventorySaves, TArray<struct FS_EquipmentSlotSave>* EquipmentSaveSlots, TArray<struct FS_InvSave>* NewOtherInventories, const TArray<struct FS_InvSave>& CurrentInvSavesL, const struct FS_EquipmentSlotSave& SaveEquipmentSlotL, const TArray<struct FS_EquipmentSlotSave>& EquipmentSaveL, enum class E_EquipmentType EquipmentSlotL, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue, const struct FS_EquipmentSlot& CallFunc_SelectEquipmentSlot_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FS_EquipmentSlotSave& K2Node_MakeStruct_S_EquipmentSlotSave, bool CallFunc_CheckEquipmentSlot_SlotFull, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FS_InvSave& Temp_struct_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_InvSave& K2Node_MakeStruct_S_InvSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SaveEquipmentSlots");

	Params::UBP_SGKSaveGame_C_SaveEquipmentSlots_Params Parms{};

	Parms.EquipmentInventory = EquipmentInventory;
	Parms.OtherInventorySaves = OtherInventorySaves;
	Parms.CurrentInvSavesL = CurrentInvSavesL;
	Parms.SaveEquipmentSlotL = SaveEquipmentSlotL;
	Parms.EquipmentSaveL = EquipmentSaveL;
	Parms.EquipmentSlotL = EquipmentSlotL;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectEquipmentSlot_ReturnValue = CallFunc_SelectEquipmentSlot_ReturnValue;
	Parms.CallFunc_SelectEquipmentSlot_ReturnValue_1 = CallFunc_SelectEquipmentSlot_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_S_EquipmentSlotSave = K2Node_MakeStruct_S_EquipmentSlotSave;
	Parms.CallFunc_CheckEquipmentSlot_SlotFull = CallFunc_CheckEquipmentSlot_SlotFull;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_InvSave = K2Node_MakeStruct_S_InvSave;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentSaveSlots != nullptr)
		*EquipmentSaveSlots = std::move(Parms.EquipmentSaveSlots);

	if (NewOtherInventories != nullptr)
		*NewOtherInventories = std::move(Parms.NewOtherInventories);

}


// Function BP_SGKSaveGame.BP_SGKSaveGame_C.SaveInventory__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SGKSaveGame_C::SaveInventory__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SGKSaveGame_C", "SaveInventory__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


