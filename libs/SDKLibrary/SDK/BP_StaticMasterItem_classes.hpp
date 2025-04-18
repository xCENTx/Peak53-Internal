#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StaticMasterItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "S_InvItem_structs.hpp"
#include "E_WeaponSlots_structs.hpp"
#include "E_WorldActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StaticMasterItem.BP_StaticMasterItem_C
// 0x00A8 (0x0338 - 0x0290)
class ABP_StaticMasterItem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Item;                                              // 0x02A0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	int32                                         ItemAmount;                                        // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RefreshItem;                                       // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AddStartingItems;                                  // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDroppedItemDestroyTimer;                        // 0x02B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDF[0x1];                                     // 0x02B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DropDestroyTime;                                   // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                             InvItem;                                           // 0x02C0(0x0030)(Edit, BlueprintVisible, Net, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          Spawned;                                           // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Dropped;                                           // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SaveGameLoaded;                                    // 0x02F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE0[0x5];                                     // 0x02F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_InvItem                             TempItem;                                          // 0x02F8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_SaveSystem_C*                       SaveGame;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Mesh;                                              // 0x0330(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	bool ActionCheck(TArray<struct FS_WorldAction>& ItemActons, E_WorldActions ActionType);
	void Consume(class UBP_PlayerInventory_C* PlayerInventory);
	void CreateItem(class ABP_GlobalInventoryManager_C* InventoryManager);
	void DropDestroyTimer();
	void EquipClothing(class UBP_PlayerInventory_C* PlayerInventory);
	void EquipWeapon(class UBP_PlayerInventory_C* PlayerInventory);
	void ExecuteUbergraph_BP_StaticMasterItem(int32 EntryPoint);
	void Hold(class UBP_PlayerInventory_C* PlayerInventory);
	void Interact(class UBP_PlayerInventory_C* PlayerInventory);
	void InteractActions(class UBP_PlayerInventory_C* PlayerInventory, E_WorldActions Action);
	void ItemDecay();
	void ItemOffsets();
	void Learn(class UBP_PlayerInventory_C* PlayerInventory);
	void LoadItem(class UBP_SGKSaveGame_C* Param_SaveGame);
	void OnRep_Mesh();
	void Open(class UBP_PlayerInventory_C* PlayerInventory);
	void Pickup(class UBP_PlayerInventory_C* PlayerInventory);
	void ReceiveBeginPlay();
	void Reset();
	void SaveNotValid();
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_CodeCheck(const class FText& Code, bool* CodeAccepted);
	bool SGK_DropItem(const struct FS_InvItem& Param_InvItem, bool Param_Dropped, bool Param_Spawned, bool SaveLoaded);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, E_WorldActions Action);
	void SGK_InteractName(class FText* InteractName);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* Param_InvItem);
	void SGK_ItemAmount(int32* Amount);
	void SGK_Mesh(class UPrimitiveComponent** Param_Mesh);
	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	bool SGK_UpdateCode(const class FText& Code);
	bool SGK_VerifyPlayer(const class FText& Text);
	void SGKSave(class UBP_SGKSaveGame_C* Save);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StaticMasterItem_C">();
	}
	static class ABP_StaticMasterItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StaticMasterItem_C>();
	}
};
static_assert(alignof(ABP_StaticMasterItem_C) == 0x000008, "Wrong alignment on ABP_StaticMasterItem_C");
static_assert(sizeof(ABP_StaticMasterItem_C) == 0x000338, "Wrong size on ABP_StaticMasterItem_C");
static_assert(offsetof(ABP_StaticMasterItem_C, UberGraphFrame) == 0x000290, "Member 'ABP_StaticMasterItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, StaticMesh) == 0x000298, "Member 'ABP_StaticMasterItem_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, Item) == 0x0002A0, "Member 'ABP_StaticMasterItem_C::Item' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, ItemAmount) == 0x0002B0, "Member 'ABP_StaticMasterItem_C::ItemAmount' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, RefreshItem) == 0x0002B4, "Member 'ABP_StaticMasterItem_C::RefreshItem' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, AddStartingItems) == 0x0002B5, "Member 'ABP_StaticMasterItem_C::AddStartingItems' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, UseDroppedItemDestroyTimer) == 0x0002B6, "Member 'ABP_StaticMasterItem_C::UseDroppedItemDestroyTimer' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, DropDestroyTime) == 0x0002B8, "Member 'ABP_StaticMasterItem_C::DropDestroyTime' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, InvItem) == 0x0002C0, "Member 'ABP_StaticMasterItem_C::InvItem' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, Spawned) == 0x0002F0, "Member 'ABP_StaticMasterItem_C::Spawned' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, Dropped) == 0x0002F1, "Member 'ABP_StaticMasterItem_C::Dropped' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, SaveGameLoaded) == 0x0002F2, "Member 'ABP_StaticMasterItem_C::SaveGameLoaded' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, TempItem) == 0x0002F8, "Member 'ABP_StaticMasterItem_C::TempItem' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, SaveGame) == 0x000328, "Member 'ABP_StaticMasterItem_C::SaveGame' has a wrong offset!");
static_assert(offsetof(ABP_StaticMasterItem_C, Mesh) == 0x000330, "Member 'ABP_StaticMasterItem_C::Mesh' has a wrong offset!");

}

