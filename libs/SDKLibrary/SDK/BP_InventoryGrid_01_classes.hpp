#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x310 - 0x2B0)
// WidgetBlueprintGeneratedClass BP_InventoryGrid_01.BP_InventoryGrid_01_C
class UBP_InventoryGrid_01_C : public UBP_MasterInventoryGrid_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InventoryCell_C*                   BP_InventoryCell_01;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryCell_C*                   BP_InventoryCell_02;                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryCell_C*                   BP_InventoryCell_03;                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryCell_C*                   BP_InventoryCell_04;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryItemIcon_C*               BP_InventoryItemIcon_01;                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryItemIcon_C*               BP_InventoryItemIcon_02;                           // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryItemIcon_C*               BP_InventoryItemIcon_03;                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_InventoryItemIcon_C*               BP_InventoryItemIcon_04;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_01;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FS_ManualIndexs>               ManualInvSlots;                                    // 0x300(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_InventoryGrid_01_C* GetDefaultObj();

	void SetCustomSlots();
	void ExecuteUbergraph_BP_InventoryGrid_01(int32 EntryPoint, TArray<class UBP_InventoryCell_C*>& K2Node_MakeArray_Array, TArray<class UBP_InventoryItemIcon_C*>& K2Node_MakeArray_Array_1);
};

}


