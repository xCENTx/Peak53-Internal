#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B0 - 0x290)
// BlueprintGeneratedClass BP_MasterGrid.BP_MasterGrid_C
class ABP_MasterGrid_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_BuildType                       GridType;                                          // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowGrids;                                         // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        BuildParts;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_MasterGrid_C* GetDefaultObj();

	int32 AddBuildPartReference(class UActorComponent* GridComponent, int32 IndexL, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void CreateGrid(class UBP_GridComponent_C* GridComponent, class UBoxComponent** Grid, class UBoxComponent* GridL, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_AddBuildPartReference_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_SelectGridSize_Value, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UBoxComponent* CallFunc_AddComponent_ReturnValue);
	void DeleteGrid(class UBoxComponent* Grid);
};

}


