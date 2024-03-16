#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2D8 - 0x290)
// BlueprintGeneratedClass BP_DestroyedStorageBag.BP_DestroyedStorageBag_C
class ABP_DestroyedStorageBag_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MasterInventory_C*                 BP_MasterInventory;                                // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  InteractName;                                      // 0x2A8(0x18)(Edit, BlueprintVisible)
	class FText                                  OpenInventoryText;                                 // 0x2C0(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class ABP_DestroyedStorageBag_C* GetDefaultObj();

	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	void SGK_InteractName(class FText* InteractName);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	void SGK_ItemAmount(int32* Amount);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_CodeCheck(class FText Code, bool* CodeAccepted);
	bool SGK_VerifyPlayer(class FText Text);
	bool SGK_UpdateCode(class FText Code);
	void SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers);
	void SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_PlayerOutProximity();
	void SGK_PlayerInProximity();
	void ExecuteUbergraph_BP_DestroyedStorageBag(int32 EntryPoint, TArray<class FText>& K2Node_Event_VerifiedPlayers, bool K2Node_Event_TurnedOn);
};

}


