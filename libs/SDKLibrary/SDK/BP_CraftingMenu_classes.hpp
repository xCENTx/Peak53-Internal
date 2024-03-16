#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x398 - 0x278)
// WidgetBlueprintGeneratedClass BP_CraftingMenu.BP_CraftingMenu_C
class UBP_CraftingMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CraftingListing_C*                 BP_CraftingListing;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_1;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_2;                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_3;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_4;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_5;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_6;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_7;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_8;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_9;                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingListing_C*                 BP_CraftingListing_10;                             // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       ComboBoxString_205;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Panel_C*                           CraftingPanel;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CraftingQueue_C*                   CraftingQueuePanel;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               InnerBackround;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MultipleItemTooltip;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OuterBackround;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_179;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CraftingSlotPanelVisibility;                       // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_RecipeCategory                  CurrentFillter;                                    // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_467E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InnerBackroundColor;                               // 0x324(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OuterBackroundColor;                               // 0x334(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_467F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CraftingPanelTitleText;                            // 0x348(0x18)(Edit, BlueprintVisible)
	class FText                                  CraftingQueueTitleText;                            // 0x360(0x18)(Edit, BlueprintVisible)
	bool                                         ShowMultipleCraftText;                             // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4680[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MultipleCraftText;                                 // 0x380(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_CraftingMenu_C* GetDefaultObj();

	void AddCraftingQueueListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory);
	void StartListingTimer(class FName CraftingRecipe);
	void UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing);
	void StringToEnum(const class FString& SelectedItem, enum class E_RecipeCategory* EnumValue, enum class E_RecipeCategory CategoryL, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void PopulateCraftingList(enum class E_RecipeCategory RecipeCategory, const struct FS_CraftingRecipe& CraftingListL, class UBP_CraftingListing_C* NewCraftingListingL, class FName CraftingLisingRowNameL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FS_CraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Set_Contains_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class E_CraftingType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Set_Contains_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_CraftingListing_C* CallFunc_Create_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void PopulateOptionMenu(enum class E_RecipeCategory CategoryL, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__ComboBoxString_205_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void ExecuteUbergraph_BP_CraftingMenu(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, enum class E_RecipeCategory CallFunc_StringToEnum_EnumValue);
};

}


