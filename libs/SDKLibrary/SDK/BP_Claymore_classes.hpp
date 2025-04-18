#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Claymore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterBuildPart_classes.hpp"
#include "E_WorldActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Claymore.BP_Claymore_C
// 0x0068 (0x03E8 - 0x0380)
class ABP_Claymore_C final : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Claymore_C;                      // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ClaymoreLight5;                                    // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ClaymoreLight4;                                    // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ClaymoreLight3;                                    // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ClaymoreLight2;                                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision;                                    // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*             BP_GroundCheckComponent;                           // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        SpikeDamage;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Damage_Causer;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Damaged_Actor;                                     // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ProperOwner;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Claymore_Explode_Sound_Cue;                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_MasterSpikes_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Claymore_Explode_Sound_MC(class USoundBase* Sound);
	void ExecuteUbergraph_BP_Claymore(int32 EntryPoint);
	void MCSetOwner();
	void PlantClymore();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ResetDamage();
	void RotationMC(const struct FRotator& NewRotation);
	void ServerSetOwner();
	void SetRotationServer(const struct FRotator& NewRotation);
	void SGK_AllowInteraction(bool* AllowInteraction);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, E_WorldActions Action);
	void SGK_InteractName(class FText* InteractName);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Claymore_C">();
	}
	static class ABP_Claymore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Claymore_C>();
	}
};
static_assert(alignof(ABP_Claymore_C) == 0x000008, "Wrong alignment on ABP_Claymore_C");
static_assert(sizeof(ABP_Claymore_C) == 0x0003E8, "Wrong size on ABP_Claymore_C");
static_assert(offsetof(ABP_Claymore_C, UberGraphFrame_BP_Claymore_C) == 0x000380, "Member 'ABP_Claymore_C::UberGraphFrame_BP_Claymore_C' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, ClaymoreLight5) == 0x000388, "Member 'ABP_Claymore_C::ClaymoreLight5' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, ClaymoreLight4) == 0x000390, "Member 'ABP_Claymore_C::ClaymoreLight4' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Box) == 0x000398, "Member 'ABP_Claymore_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, ClaymoreLight3) == 0x0003A0, "Member 'ABP_Claymore_C::ClaymoreLight3' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, ClaymoreLight2) == 0x0003A8, "Member 'ABP_Claymore_C::ClaymoreLight2' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, BuildCollision) == 0x0003B0, "Member 'ABP_Claymore_C::BuildCollision' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, BP_GroundCheckComponent) == 0x0003B8, "Member 'ABP_Claymore_C::BP_GroundCheckComponent' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, SpikeDamage) == 0x0003C0, "Member 'ABP_Claymore_C::SpikeDamage' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Damage_Causer) == 0x0003C8, "Member 'ABP_Claymore_C::Damage_Causer' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Damaged_Actor) == 0x0003D0, "Member 'ABP_Claymore_C::Damaged_Actor' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, ProperOwner) == 0x0003D8, "Member 'ABP_Claymore_C::ProperOwner' has a wrong offset!");
static_assert(offsetof(ABP_Claymore_C, Claymore_Explode_Sound_Cue) == 0x0003E0, "Member 'ABP_Claymore_C::Claymore_Explode_Sound_Cue' has a wrong offset!");

}

