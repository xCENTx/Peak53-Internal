#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2F8 - 0x290)
// BlueprintGeneratedClass BP_GridManager.BP_GridManager_C
class ABP_GridManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      FoundationGrid;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      WallGrid;                                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      TriangleFoundationGrid;                            // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      FloorGrid;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      TriangleFloorGrid;                                 // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      StairsGrid;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      DoorGrid;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      WindowGrid;                                        // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      LockGrid;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      RoofGrid;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterGrid_C*                      DoubleDoorGrid;                                    // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GridManager_C* GetDefaultObj();

	void GetAllGrids(TArray<class ABP_MasterGrid_C*>* AllGrids, const TArray<class ABP_MasterGrid_C*>& AllGridsL, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_MasterGrid_C* CallFunc_SelectGridActor_Grid, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void DeleteGrid(class UBoxComponent* Grid, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MasterGrid_C* K2Node_DynamicCast_AsBP_Master_Grid, bool K2Node_DynamicCast_bSuccess, class ABP_MasterGrid_C* CallFunc_SelectGridActor_Grid, bool CallFunc_IsValid_ReturnValue_1);
	void SelectGridActor(enum class E_BuildType GridType, class ABP_MasterGrid_C** Grid, enum class E_BuildType Temp_byte_Variable, class ABP_MasterGrid_C* Temp_object_Variable, class ABP_MasterGrid_C* Temp_object_Variable_1, class ABP_MasterGrid_C* K2Node_Select_Default);
	void CreateGridActors(class ABP_MasterGrid_C* NewGrid, enum class E_BuildType GridTypeL, int32 Temp_int_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* CallFunc_SGK_GridClasses_Grid, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MasterGrid_C* CallFunc_FinishSpawningActor_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GridManager(int32 EntryPoint);
};

}


