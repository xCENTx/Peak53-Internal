#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22F (0x8C8 - 0x699)
// BlueprintGeneratedClass BP_MasterWeapon.BP_MasterWeapon_C
class ABP_MasterWeapon_C : public ABP_MasterHoldable_C
{
public:
	uint8                                        Pad_29F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                        AllowedAttachments;                                // 0x6A8(0x10)(Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>           DefaultAttachments;                                // 0x6B8(0x10)(Edit, BlueprintVisible)
	TSet<enum class E_AttachmentType>            AvalibleAttachmentSlot;                            // 0x6C8(0x50)(Edit, BlueprintVisible)
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x718(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Damage>                     Damage;                                            // 0x720(0x10)(Edit, BlueprintVisible)
	class ABP_MasterAttachment_C*                NewAttachment;                                     // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPhysicalSurface, class USoundBase*> HitSurfaceSounds;                                  // 0x738(0x50)(Edit, BlueprintVisible)
	TMap<enum class EPhysicalSurface, class UMaterialInterface*> HitSurfaceDecals;                                  // 0x788(0x50)(Edit, BlueprintVisible)
	TMap<enum class EPhysicalSurface, class UNiagaraSystem*> HitSurfaceParticles;                               // 0x7D8(0x50)(Edit, BlueprintVisible)
	TMap<enum class EPhysicalSurface, struct FVector> DecalSize;                                         // 0x828(0x50)(Edit, BlueprintVisible)
	double                                       DecalLifeSpan;                                     // 0x878(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Decal_Fade_Distance;                               // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDurabilityCheck;                                // 0x888(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowAttackingInStandardStance;                    // 0x889(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ApplyBleedDamage;                                  // 0x88A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BleedTickTime;                                     // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RandomlyApplyBleed;                                // 0x898(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_MinMax                             BleedTickDamage;                                   // 0x89C(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BleedApplyChance;                                  // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BleedLength;                                       // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      DamageType;                                        // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CurrentSound;                                      // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterWeapon_C* GetDefaultObj();

	void AttackStanceCheck(bool* AllowAttack, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	bool DurabilityCheck(const struct FS_InvSlot& ItemSlotL, const struct FS_WeaponSlot& WeaponSlotL, bool CallFunc_SGK_DurabilityDetails_ItemFound, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails, bool CallFunc_SGK_DurabilityDetails_ItemFound_1, const struct FS_DurabilityDetails& CallFunc_SGK_DurabilityDetails_DurabilityDetails_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_SGK_GetInvSlot_SlotFound, const struct FS_InvSlot& CallFunc_SGK_GetInvSlot_InvSlot, const struct FS_WeaponSlot& CallFunc_SelectedWeaponSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void SpawnHitSurfaceParticle(const struct FHitResult& HitResult, class UPhysicalMaterial* SurfaceMaterialL, class UNiagaraSystem* SurfaceParticleL, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UNiagaraSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UNiagaraSystem* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnHitSurfaceSound(const struct FHitResult& HitResult, class UPhysicalMaterial* SurfaceMaterialL, class USoundBase* SurfaceSoundL, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class USoundBase* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SpawnHitSurfaceDecal(const struct FHitResult& HitResult, class UPhysicalMaterial* SurfaceMaterialL, class UMaterialInterface* SurfaceDecalL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, class UMaterialInterface* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UMaterialInterface* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UDecalComponent* CallFunc_SpawnDecalAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SetFadeScreenSize_NewFadeScreenSize_ImplicitCast, float CallFunc_SpawnDecalAttached_LifeSpan_ImplicitCast);
	bool PlayDetachWeaponAnim(class ABP_MasterAttachment_C* Attachment, const struct FS_AttachmentDetails& AttachmentDetails, TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMesh* CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue, class UAnimSequenceBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	bool PlayAttachWeaponAnim(class ABP_MasterAttachment_C* Attachment, const struct FS_AttachmentDetails& AttachmentDetails, TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMesh* CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue, class UAnimSequenceBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ApplyHitActorDamage(class AActor* HitActor, class FName HitBone, TArray<struct FS_Damage>& Damage, enum class E_Hitbox BuildPartHitboxL, bool BuildPartL, bool Temp_bool_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, TScriptInterface<class IBP_SGKDamageInterface_C> K2Node_DynamicCast_AsBP_SGKDamage_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FDataTableRowHandle& CallFunc_SGK_BuildPart_BuildPart, bool CallFunc_SGK_BuildPartDetails_BuildPartFound, const struct FS_BuildPartDetails& CallFunc_SGK_BuildPartDetails_BuildPartDetails, enum class E_Hitbox CallFunc_SGK_IsHitbox_Hitbox, enum class E_Hitbox K2Node_Select_Default, int32 CallFunc_SGK_HitboxDamage_Damage, TScriptInterface<class IBP_SGKDamageInterface_C> K2Node_DynamicCast_AsBP_SGKDamage_Interface_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, enum class E_Hitbox CallFunc_SGK_IsHitbox_Hitbox_1, enum class E_Hitbox K2Node_Select_Default_1, int32 CallFunc_SGK_HitboxDamage_Damage_1, float CallFunc_RandomBoolWithWeight_Weight_ImplicitCast);
	void AddNewAttachment(class UClass* Class, const struct FS_InvItem& AttachmentItem, bool PlayAnim, class ABP_MasterAttachment_C** NewAttachment, class ABP_MasterAttachment_C* NewAttachmentL, class UPrimitiveComponent* WeaponMesh, class AActor* CallFunc_GetOwner_ReturnValue, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MasterAttachment_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_MasterAttachment_C* CallFunc_FinishSpawningActor_ReturnValue_1);
	void ApplyWeaponAttachmentStats(class ABP_MasterAttachment_C* Attachment, bool CallFunc_IsValid_ReturnValue);
	void RemoveWeaponAttchmentStats(class ABP_MasterAttachment_C* Attachment, bool CallFunc_IsValid_ReturnValue);
	void ApplyAttachmentDamage(class ABP_MasterAttachment_C* Attachment, bool Add, int32 IndexL, const struct FS_Damage& WeaponDamageL, const struct FS_Damage& AttachmentDamageL, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_Damage& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FS_Damage& CallFunc_Array_Get_Item_1, const struct FS_Damage& K2Node_MakeStruct_S_Damage, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void OnNotifyEnd_8390FA13400A16AA738DBD972414B766(class FName NotifyName);
	void OnNotifyBegin_8390FA13400A16AA738DBD972414B766(class FName NotifyName);
	void OnInterrupted_8390FA13400A16AA738DBD972414B766(class FName NotifyName);
	void OnBlendOut_8390FA13400A16AA738DBD972414B766(class FName NotifyName);
	void OnCompleted_8390FA13400A16AA738DBD972414B766(class FName NotifyName);
	void ReceiveBeginPlay();
	void SGK_AttachNewAttachment(class ABP_MasterAttachment_C* Attachment, const struct FS_InvItem& InvItem, enum class E_AttachmentType AttachmentType);
	void SGK_ShowNewAttachment();
	void MulticastPlayWeaponMeshAnimation(class UAnimSequenceBase* Animation);
	void MulticastPlayMontage(class UAnimMontage* Montage);
	void MulticastHitSurfaceEffects(const struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_MasterWeapon(int32 EntryPoint, const struct FHitResult& K2Node_CustomEvent_HitResult, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, bool Temp_bool_Has_Been_Initd_Variable, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh_1, class ABP_MasterAttachment_C* K2Node_Event_Attachment, const struct FS_InvItem& K2Node_Event_InvItem, enum class E_AttachmentType K2Node_Event_AttachmentType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh_2, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UAnimSequenceBase* K2Node_CustomEvent_Animation, class UAnimMontage* K2Node_CustomEvent_Montage, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_LoadWeaponAttachments_self_CastInput, bool CallFunc_IsValid_ReturnValue_3);
};

}

