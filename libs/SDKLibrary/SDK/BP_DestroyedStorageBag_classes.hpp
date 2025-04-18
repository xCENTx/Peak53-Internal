#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DestroyedStorageBag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_WorldActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DestroyedStorageBag.BP_DestroyedStorageBag_C
// 0x0048 (0x02D8 - 0x0290)
class ABP_DestroyedStorageBag_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MasterInventory_C*                  BP_MasterInventory;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                   InteractName;                                      // 0x02A8(0x0018)(Edit, BlueprintVisible)
	class FText                                   OpenInventoryText;                                 // 0x02C0(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_BP_DestroyedStorageBag(int32 EntryPoint);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_CodeCheck(const class FText& Code, bool* CodeAccepted);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, E_WorldActions Action);
	void SGK_InteractName(class FText* Param_InteractName);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	void SGK_ItemAmount(int32* Amount);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	bool SGK_UpdateCode(const class FText& Code);
	bool SGK_VerifyPlayer(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DestroyedStorageBag_C">();
	}
	static class ABP_DestroyedStorageBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DestroyedStorageBag_C>();
	}
};
static_assert(alignof(ABP_DestroyedStorageBag_C) == 0x000008, "Wrong alignment on ABP_DestroyedStorageBag_C");
static_assert(sizeof(ABP_DestroyedStorageBag_C) == 0x0002D8, "Wrong size on ABP_DestroyedStorageBag_C");
static_assert(offsetof(ABP_DestroyedStorageBag_C, UberGraphFrame) == 0x000290, "Member 'ABP_DestroyedStorageBag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedStorageBag_C, BP_MasterInventory) == 0x000298, "Member 'ABP_DestroyedStorageBag_C::BP_MasterInventory' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedStorageBag_C, StaticMesh) == 0x0002A0, "Member 'ABP_DestroyedStorageBag_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedStorageBag_C, InteractName) == 0x0002A8, "Member 'ABP_DestroyedStorageBag_C::InteractName' has a wrong offset!");
static_assert(offsetof(ABP_DestroyedStorageBag_C, OpenInventoryText) == 0x0002C0, "Member 'ABP_DestroyedStorageBag_C::OpenInventoryText' has a wrong offset!");

}

