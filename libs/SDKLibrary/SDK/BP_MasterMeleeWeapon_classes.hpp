#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBE (0x986 - 0x8C8)
// BlueprintGeneratedClass BP_MasterMeleeWeapon.BP_MasterMeleeWeapon_C
class ABP_MasterMeleeWeapon_C : public ABP_MasterWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAnimMontage*>                  MeleeAttackAnimations;                             // 0x8D0(0x10)(Edit, BlueprintVisible)
	TArray<class AActor*>                        HitActors;                                         // 0x8E0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         PrimaryButtonDown;                                 // 0x8F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5608[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       TraceSocketsLastFrameLoc;                          // 0x8F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       TraceSocketsCurrentFrameLoc;                       // 0x908(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          SweepTraceTimer;                                   // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MeleeTraceFrequency;                               // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanHarvestResources;                               // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5609[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UClass*, struct FS_MinMax>        HarvestableResources;                              // 0x930(0x50)(Edit, BlueprintVisible)
	enum class EDrawDebugTrace                   MeleeTraceVisibility;                              // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMode;                                         // 0x981(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResourceHit;                                       // 0x982(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChainAttack;                                       // 0x983(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   MeleeTraceChannel;                                 // 0x984(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DurabilityDecreased;                               // 0x985(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterMeleeWeapon_C* GetDefaultObj();

	void ResetSwing();
	void SweepTrace(const TArray<class UBP_MeleeTraceSocket_C*>& MeleeSocketsL, int32 InstanceIndexL, class UBP_MasterResourceComponent_C* HitResourceComponentL, class ABP_MasterResource_C* HitResourceL, class UPrimitiveComponent* HitComponentL, class FName BoneNameL, enum class E_Hitbox HitboxL, class AActor* HitActorL, const struct FHitResult& HitResultL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UBP_MeleeTraceSocket_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class USceneComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UBP_MeleeTraceSocket_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_ResourceManager_C* CallFunc_SGK_GetResourceManager_ResourceManager, const struct FS_MinMax& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_MasterResource_C* K2Node_DynamicCast_AsBP_Master_Resource, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CollectResource_ResourceDepleted, class UBP_MasterResourceComponent_C* K2Node_DynamicCast_AsBP_Master_Resource_Component, bool K2Node_DynamicCast_bSuccess_2, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FS_MinMax& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_2, const struct FVector& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void RandomMeleeAttackAnimation(class UAnimMontage** AttackAnimation, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item);
	void OnNotifyEnd_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnNotifyBegin_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnInterrupted_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnBlendOut_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnCompleted_1830005C47917F94146466A299473C2F(class FName NotifyName);
	void OnNotifyEnd_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnNotifyBegin_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnInterrupted_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnBlendOut_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void OnCompleted_F410FBF64DC7B024F21B25AE37B2912E(class FName NotifyName);
	void SGK_MeleeCollisionToggle(bool TraceOn);
	void SGK_ResetHoldable();
	void SGK_ServerPrimaryAction(bool KeyDown);
	void MulticastMeleeAttackMontage(int32 AnimIndex);
	void ExecuteUbergraph_BP_MasterMeleeWeapon(int32 EntryPoint, int32 K2Node_CustomEvent_AnimIndex, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_TraceOn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_AttackStanceCheck_AllowAttack, bool CallFunc_DurabilityCheck_ReturnValue, bool CallFunc_DurabilityCheck_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FName K2Node_CustomEvent_NotifyName_6, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAnimMontage* CallFunc_RandomMeleeAttackAnimation_AttackAnimation, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool K2Node_Event_KeyDown, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_7, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAnimMontage* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}

