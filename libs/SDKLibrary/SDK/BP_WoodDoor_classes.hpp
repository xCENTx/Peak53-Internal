#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x418 - 0x380)
// BlueprintGeneratedClass BP_WoodDoor.BP_WoodDoor_C
class ABP_WoodDoor_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BuildCollision4;                                   // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision3;                                   // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_GridComponent;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent;                               // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision2;                                   // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision1;                                   // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Swing_Closed_Rotation_FEEF53624F1E1F1C3BBAE8ACFD3B4163; // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Swing_Closed__Direction_FEEF53624F1E1F1C3BBAE8ACFD3B4163; // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Swing_Closed;                                      // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Swing_Open_Rotation_D652619E46CA188EF4DDFDA736C8FF6B; // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Swing_Open__Direction_D652619E46CA188EF4DDFDA736C8FF6B; // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Swing_Open;                                        // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x3E0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OpenDirection;                                     // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Door_Open;                                         // 0x3F9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 InteractedPlayerInventory;                         // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OpenDoorSound;                                     // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CloseDoorSound;                                    // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WoodDoor_C* GetDefaultObj();

	void OnRep_Door_Open();
	void CheckLocks(bool* AllowOpen, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_MasterLock_C* K2Node_DynamicCast_AsBP_Master_Lock, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_CanOpen_AllowOpen, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_PlayerFindKeyItem_Found);
	void SGK_AllowInteraction(bool* AllowInteraction, bool CallFunc_SGK_AllowInteraction_AllowInteraction);
	void SGK_InteractName(class FText* InteractName, class FText CallFunc_SGK_InteractName_InteractName);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_SGK_PossibleActions_ActionsFound, TArray<struct FS_WorldAction>& CallFunc_SGK_PossibleActions_PossibleActions, class FText K2Node_Select_Default, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action);
	void Swing_Closed__FinishedFunc();
	void Swing_Closed__UpdateFunc();
	void Swing_Open__FinishedFunc();
	void Swing_Open__UpdateFunc();
	void Interact();
	void DoorAnimation();
	void Open();
	void MulticastBuildPartPlaced();
	void ExecuteUbergraph_BP_WoodDoor(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue_1, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, bool CallFunc_CheckLocks_AllowOpen, TArray<class AActor*>& CallFunc_FilterArray_FilteredArray, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_Select_Default, TArray<class UPrimitiveComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


