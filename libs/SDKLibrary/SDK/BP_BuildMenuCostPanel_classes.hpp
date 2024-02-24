#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2C8 - 0x278)
// WidgetBlueprintGeneratedClass BP_BuildMenuCostPanel.BP_BuildMenuCostPanel_C
class UBP_BuildMenuCostPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Cost;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemName;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TotalAmount;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           AllowedColor;                                      // 0x2A0(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           DisallowedColor;                                   // 0x2B4(0x14)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_BuildMenuCostPanel_C* GetDefaultObj();

	void UpdateText(struct FS_CraftingCost& Cost, int32 TotalAmountL, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, int32 CallFunc_PlayerInventoryTotalItemAmount_TotalAmount, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void InitializeCostPanel(const struct FS_CraftingCost& Cost);
	void ExecuteUbergraph_BP_BuildMenuCostPanel(int32 EntryPoint, const struct FS_CraftingCost& K2Node_CustomEvent_Cost);
};

}


