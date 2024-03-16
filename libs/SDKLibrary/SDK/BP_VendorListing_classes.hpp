#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x358 - 0x278)
// WidgetBlueprintGeneratedClass BP_VendorListing.BP_VendorListing_C
class UBP_VendorListing_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableText*                         VenderAmountText;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               VenderButton;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VenderButtonText;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VenderListingIcon;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VenderListingNameText;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                VenderListingTooltip;                              // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         UseItemShortName;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SellListing;                                       // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LastText;                                          // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_VendorListingTooltips_C*           Tooltip;                                           // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_VendorSell                         VenderSellListing;                                 // 0x2D8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_VendorBuy                          VenderBuyListing;                                  // 0x310(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VendorListing_C* GetDefaultObj();

	void ToggleTooltip(bool OpenTooltip, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UBP_VendorListingTooltips_C* K2Node_DynamicCast_AsBP_Vendor_Listing_Tooltips, bool K2Node_DynamicCast_bSuccess);
	void InitializeVenderBuyListing(const struct FS_VendorBuy& VenderListing, const struct FS_ItemDetails& ItemDetailsL, bool Temp_bool_Variable, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTexture2D* K2Node_Select_Default);
	void InitializeVenderSellListing(const struct FS_VendorSell& VenderSellListing, const struct FS_ItemDetails& ItemDetailsL, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1);
	void BndEvt__VenderAmountText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__EditableText_287_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__VenderButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_BP_VendorListing(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsNumeric_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


