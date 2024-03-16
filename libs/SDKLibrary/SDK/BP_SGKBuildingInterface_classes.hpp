#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKBuildingInterface.BP_SGKBuildingInterface_C
class IBP_SGKBuildingInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKBuildingInterface_C* GetDefaultObj();

	void SGK_BPBuildCollision(TArray<class UPrimitiveComponent*>* Collision);
	void SGK_BPGrids(TArray<class UBP_GridComponent_C*>* Grids);
	void SGK_LoadExtraData(class UBP_SGKSaveGame_C* SaveGame, int32 Index);
	bool SGK_Preview(bool Preview);
	bool SGK_AddMultipleOwners(TArray<class FText>& Owners);
	bool SGK_ClearOwners();
	bool SGK_AddOwner(class FText PlayerName);
	void SGK_Upgrade();
	void SGK_BuildPartPlaced(class UBP_PlayerInventory_C* PlayerInventory, bool FromSaveGame);
	void SGK_IsOwner(class FText PlayerName, bool* IsOwner);
	void SGK_BuildPart(struct FDataTableRowHandle* BuildPart);
	void SGK_BuildingOptions(class UBP_PlayerInventory_C* PlayerInventory);
	void SGK_IsPlaced(bool* IsPlaced);
	void SGK_SupportCheck(bool DestroyOnFail, bool DirectSupportOnly, bool* Supported, bool* IndirectSupportOnly);
	void SGK_IsPendingDestroy(bool* IsPendingDestroy);
	void SGK_BuildPartType(enum class E_BuildType* Type);
	void SGK_DeleteBuildPart(class UBP_PlayerBuildingComponent_C* PlayerBuildingComponent, bool ForceDestroy);
};

}


