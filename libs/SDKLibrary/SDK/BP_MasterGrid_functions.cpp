#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterGrid.BP_MasterGrid_C
// (Actor)

class UClass* ABP_MasterGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterGrid_C");

	return Clss;
}


// BP_MasterGrid_C BP_MasterGrid.Default__BP_MasterGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterGrid_C* ABP_MasterGrid_C::GetDefaultObj()
{
	static class ABP_MasterGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterGrid_C*>(ABP_MasterGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MasterGrid.BP_MasterGrid_C.AddBuildPartReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*             GridComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              IndexL                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_MasterGrid_C::AddBuildPartReference(class UActorComponent* GridComponent, int32 IndexL, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterGrid_C", "AddBuildPartReference");

	Params::ABP_MasterGrid_C_AddBuildPartReference_Params Parms{};

	Parms.GridComponent = GridComponent;
	Parms.IndexL = IndexL;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MasterGrid.BP_MasterGrid_C.CreateGrid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GridComponent_C*         GridComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*               Grid                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*               GridL                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddBuildPartReference_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectGridSize_Value                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*               CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterGrid_C::CreateGrid(class UBP_GridComponent_C* GridComponent, class UBoxComponent** Grid, class UBoxComponent* GridL, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_AddBuildPartReference_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_SelectGridSize_Value, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UBoxComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterGrid_C", "CreateGrid");

	Params::ABP_MasterGrid_C_CreateGrid_Params Parms{};

	Parms.GridComponent = GridComponent;
	Parms.GridL = GridL;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_AddBuildPartReference_ReturnValue = CallFunc_AddBuildPartReference_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_SelectGridSize_Value = CallFunc_SelectGridSize_Value;
	Parms.CallFunc_Divide_VectorInt_ReturnValue = CallFunc_Divide_VectorInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Grid != nullptr)
		*Grid = Parms.Grid;

}


// Function BP_MasterGrid.BP_MasterGrid_C.DeleteGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBoxComponent*               Grid                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_MasterGrid_C::DeleteGrid(class UBoxComponent* Grid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MasterGrid_C", "DeleteGrid");

	Params::ABP_MasterGrid_C_DeleteGrid_Params Parms{};

	Parms.Grid = Grid;

	UObject::ProcessEvent(Func, &Parms);

}

}


