#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x920 (0xB98 - 0x278)
// WidgetBlueprintGeneratedClass BP_VendorListingTooltips.BP_VendorListingTooltips_C
class UBP_VendorListingTooltips_C : public UUserWidget
{
public:
	class UVerticalBox*                          VenderCostList;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VenderItemDescription;                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VenderItemName;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowItemDescription;                               // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31A7[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetails;                                       // 0x2A0(0x878)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_31A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VendorSell                         VenderSellListing;                                 // 0xB20(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_VendorBuy                          VenderBuyListing;                                  // 0xB58(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VendorListingTooltips_C* GetDefaultObj();

	void InitializeSellTooltip(const struct FS_VendorSell& VenderSellListing, class UBP_VendorTooltipEntry_C* NewEntryWidgetL, const struct FS_CraftingCost& VenderCostElementL, int32 Temp_int_Array_Index_Variable, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_VendorTooltipEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void InitializeBuyTooltip(const struct FS_VendorBuy& VenderListing, class UBP_VendorTooltipEntry_C* NewEntryWidgetL, const struct FS_CraftingCost& VenderCostElementL, int32 Temp_int_Array_Index_Variable, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem_1, bool CallFunc_SGK_ItemDetails_ItemFound_1, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_VendorTooltipEntry_C* CallFunc_Create_ReturnValue, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


