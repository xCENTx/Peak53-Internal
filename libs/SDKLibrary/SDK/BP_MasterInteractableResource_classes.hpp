#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x46 (0x388 - 0x342)
// BlueprintGeneratedClass BP_MasterInteractableResource.BP_MasterInteractableResource_C
class ABP_MasterInteractableResource_C : public ABP_MasterResource_C
{
public:
	uint8                                        Pad_4805[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                  ActionText;                                        // 0x350(0x18)(Edit, BlueprintVisible)
	class FText                                  InteractName;                                      // 0x368(0x18)(Edit, BlueprintVisible)
	class UAnimMontage*                          InteractAnimation;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterInteractableResource_C* GetDefaultObj();

	void SGK_GetVerifiedPlayers(TArray<class FText>* VerifiedPlayers);
	bool SGK_UpdateCode(class FText Code);
	bool SGK_VerifyPlayer(class FText Text);
	void SGK_CodeCheck(class FText Code, bool* CodeAccepted);
	void SGK_Mesh(class UPrimitiveComponent** Mesh);
	bool SGK_Interact(class UBP_PlayerInventory_C* PlayerInventory, enum class E_WorldActions Action, class UBP_PlayerInventory_C* PlayerInventoryL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanInteract_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CollectResource_ResourceDepleted);
	void SGK_AllowInteraction(bool* AllowInteraction);
	void SGK_PossibleActions(class UBP_PlayerInventory_C* PlayerInventory, bool* ActionsFound, TArray<struct FS_WorldAction>* PossibleActions, const struct FS_WorldAction& K2Node_MakeStruct_S_WorldAction, TArray<struct FS_WorldAction>& K2Node_MakeArray_Array);
	void SGK_InteractName(class FText* InteractName);
	bool SGK_DropItem(const struct FS_InvItem& InvItem, bool Dropped, bool Spawned, bool SaveLoaded);
	void SGK_InvItem(bool* IsItem, struct FS_InvItem* InvItem);
	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_ItemAmount(int32* Amount);
	void SGK_SetVerifiedPlayers(TArray<class FText>& VerifiedPlayers);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void SGK_PlayerOutProximity();
	void SGK_PlayerInProximity();
	void ExecuteUbergraph_BP_MasterInteractableResource(int32 EntryPoint, TArray<class FText>& K2Node_Event_VerifiedPlayers, bool K2Node_Event_TurnedOn);
};

}


