#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2D0 - 0x278)
// WidgetBlueprintGeneratedClass BP_CraftingQueue.BP_CraftingQueue_C
class UBP_CraftingQueue_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Panel_C*                           BP_Panel;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            QueueScrollBox;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_CraftingQueueListing_C*>    QueueListings;                                     // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class ESlateVisibility                  CraftingSlotPanelVisibility;                       // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_541A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       ContentPanelHeight;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x2B8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_CraftingQueue_C* GetDefaultObj();

	void AddCraftingQueueListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory, class UBP_CraftingQueueListing_C* NewQueueListingL, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_CraftingQueueListing_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ClearListings();
	void PauseCraftingListing(bool CallFunc_Array_IsValidIndex_ReturnValue, class UBP_CraftingQueueListing_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void ResumeCraftingListing(bool CallFunc_Array_IsValidIndex_ReturnValue, class UBP_CraftingQueueListing_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing, class UBP_CraftingQueueListing_C* ListingWidgetL, bool CallFunc_FindCraftingListing_ReturnValue, class UBP_CraftingQueueListing_C* CallFunc_FindCraftingListing_QueueListing, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void StartListingTimer(class FName CraftingRecipe, bool CallFunc_FindCraftingListing_ReturnValue, class UBP_CraftingQueueListing_C* CallFunc_FindCraftingListing_QueueListing);
	bool FindCraftingListing(class FName CraftingRecipe, class UBP_CraftingQueueListing_C** QueueListing, bool ReturnValueL, class UBP_CraftingQueueListing_C* ArraryWidgetL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_CraftingQueueListing_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_BP_CraftingQueue(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


