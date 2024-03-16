#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKInteractionInterface.BP_SGKInteractionInterface_C
class IBP_SGKInteractionInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKInteractionInterface_C* GetDefaultObj();

	void SGK_PlayerInProximity();
	void SGK_PlayerOutProximity();
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_CodeCheck(class FText Code, bool* CodeAccepted);
	void SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers);
	void SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers);
	bool SGK_UpdateCode(class FText Code);
	bool SGK_VerifyPlayer(class FText Text);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	void SGK_ItemAmount(int32* Amount);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action);
	void SGK_InteractName(class FText* InteractName);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions);
	void SGK_AllowInteraction(bool* AllowInteraction);
};

}


