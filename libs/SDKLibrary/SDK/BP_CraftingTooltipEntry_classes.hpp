#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass BP_CraftingTooltipEntry.BP_CraftingTooltipEntry_C
class UBP_CraftingTooltipEntry_C : public UUserWidget
{
public:
	class UTextBlock*                            CraftingEntryAmount;                               // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CraftingEntryName;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CraftingTooltipEntry_C* GetDefaultObj();

	void EntryCost(TArray<struct FS_CraftingCost>& Array, int32 Index, class FText* Name, int32* Amount, const struct FS_CraftingCost& CallFunc_Array_Get_Item, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails);
	void InitializeEntry(const struct FS_CraftingRecipe& Recipe, int32 EntryIndex, bool IsItemCost, class FText CallFunc_EntryCost_Name, int32 CallFunc_EntryCost_Amount, class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_EntryCost_Name_1, int32 CallFunc_EntryCost_Amount_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1);
};

}


