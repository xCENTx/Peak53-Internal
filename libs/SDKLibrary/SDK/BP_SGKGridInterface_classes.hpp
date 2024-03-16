#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SGKGridInterface.BP_SGKGridInterface_C
class IBP_SGKGridInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_SGKGridInterface_C* GetDefaultObj();

	void SGK_InvItemSlots(TArray<class UBP_InventoryItemIcon_C*>* ItemInvWidgets);
	void SGK_ConstructGrid(class UBP_MasterInventory_C* GridInventory);
	void SGK_CellSlots(TArray<class UBP_InventoryCell_C*>* Cells);
};

}


