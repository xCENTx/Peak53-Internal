#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x3E8 - 0x380)
// BlueprintGeneratedClass BP_Claymore.BP_Claymore_C
class ABP_Claymore_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ClaymoreLight5;                                    // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ClaymoreLight4;                                    // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ClaymoreLight3;                                    // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ClaymoreLight2;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent;                           // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       SpikeDamage;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Damage_Causer;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Damaged_Actor;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ProperOwner;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Claymore_Explode_Sound_Cue;                        // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Claymore_C* GetDefaultObj();

	void SGK_InteractName(class FText* InteractName);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void BndEvt__BP_MasterSpikes_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ResetDamage();
	void ServerSetOwner();
	void MCSetOwner();
	void SetRotationServer(const struct FRotator& NewRotation);
	void RotationMC(const struct FRotator& NewRotation);
	void Claymore_Explode_Sound_MC(class USoundBase* Sound);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void PlantClymore();
	void ExecuteUbergraph_BP_Claymore(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool Temp_bool_IsClosed_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IBP_SGKDamageInterface_C> CallFunc_SGK_Damage_self_CastInput, bool Temp_bool_IsClosed_Variable_1, TScriptInterface<class IBPI_MasterCharRef_C> K2Node_DynamicCast_AsBPI_Master_Char_Ref, bool K2Node_DynamicCast_bSuccess_2, class ABP_SGKMasterCharacter_C* CallFunc_CharRef_CharRef, const struct FRotator& K2Node_CustomEvent_NewRotation_1, const struct FRotator& K2Node_CustomEvent_NewRotation, bool CallFunc_K2_SetActorRotation_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& Temp_struct_Variable_1, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue_1, TScriptInterface<class IBPI_MasterCharRef_C> K2Node_DynamicCast_AsBPI_Master_Char_Ref_1, bool K2Node_DynamicCast_bSuccess_3, class ABP_SGKMasterCharacter_C* CallFunc_CharRef_CharRef_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


