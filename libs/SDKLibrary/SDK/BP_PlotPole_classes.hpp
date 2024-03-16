#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3E0 - 0x380)
// BlueprintGeneratedClass BP_PlotPole.BP_PlotPole_C
class ABP_PlotPole_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      OwnershipSphere;                                   // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent;                           // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision1;                                   // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  AddOwnerNotificationMessage;                       // 0x3A8(0x18)(Edit, BlueprintVisible)
	class FText                                  ClearOwnersNotificationMessage;                    // 0x3C0(0x18)(Edit, BlueprintVisible)
	bool                                         UseMaxOwners;                                      // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4512[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxOwners;                                         // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlotPole_C* GetDefaultObj();

	bool HasMaxOwners(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateBuildPartsOwners(bool Clear, int32 Temp_int_Array_Index_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TArray<class AActor*>& CallFunc_ComponentOverlapActors_OutActors, bool CallFunc_ComponentOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_AddMultipleOwners_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_ClearOwners_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_MasterBuildPart_C* K2Node_DynamicCast_AsBP_Master_Build_Part, bool K2Node_DynamicCast_bSuccess_2);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_1, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction_2, bool CallFunc_SGK_PossibleActions_ActionsFound, TArray<struct FS_WorldAction>& CallFunc_SGK_PossibleActions_PossibleActions, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, bool CallFunc_HasMaxOwners_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_2, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_3, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_SGK_ClearOwners_ReturnValue, bool CallFunc_SGK_AddOwner_ReturnValue);
	void SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame);
	void ExecuteUbergraph_BP_PlotPole(int32 EntryPoint, class UBP_PlayerInventory_C* K2Node_Event_PlayerInventory, bool K2Node_Event_FromSaveGame, int32 Temp_int_Array_Index_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_ComponentOverlapActors_OutActors, bool CallFunc_ComponentOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_ClearOwners_ReturnValue, class ABP_MasterBuildPart_C* K2Node_DynamicCast_AsBP_Master_Build_Part, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SGK_AddMultipleOwners_ReturnValue);
};

}


