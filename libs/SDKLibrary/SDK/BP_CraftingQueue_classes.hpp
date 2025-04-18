#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CraftingQueue

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CraftingQueue.BP_CraftingQueue_C
// 0x0058 (0x02D0 - 0x0278)
class UBP_CraftingQueue_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Panel_C*                            BP_Panel;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             QueueScrollBox;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UBP_CraftingQueueListing_C*>     QueueListings;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	ESlateVisibility                              CraftingSlotPanelVisibility;                       // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3862[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        ContentPanelHeight;                                // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   TitleText;                                         // 0x02B8(0x0018)(Edit, BlueprintVisible)

public:
	void AddCraftingQueueListing(const struct FS_CraftingQueue& NewQueueListing, class UBP_MasterInventory_C* CraftingInventory);
	void ClearListings();
	void Construct();
	void ExecuteUbergraph_BP_CraftingQueue(int32 EntryPoint);
	bool FindCraftingListing(class FName CraftingRecipe, class UBP_CraftingQueueListing_C** QueueListing);
	void PauseCraftingListing();
	void PreConstruct(bool IsDesignTime);
	void ResumeCraftingListing();
	void StartListingTimer(class FName CraftingRecipe);
	void UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CraftingQueue_C">();
	}
	static class UBP_CraftingQueue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CraftingQueue_C>();
	}
};
static_assert(alignof(UBP_CraftingQueue_C) == 0x000008, "Wrong alignment on UBP_CraftingQueue_C");
static_assert(sizeof(UBP_CraftingQueue_C) == 0x0002D0, "Wrong size on UBP_CraftingQueue_C");
static_assert(offsetof(UBP_CraftingQueue_C, UberGraphFrame) == 0x000278, "Member 'UBP_CraftingQueue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, BP_Panel) == 0x000280, "Member 'UBP_CraftingQueue_C::BP_Panel' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, QueueScrollBox) == 0x000288, "Member 'UBP_CraftingQueue_C::QueueScrollBox' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, QueueListings) == 0x000290, "Member 'UBP_CraftingQueue_C::QueueListings' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, CraftingSlotPanelVisibility) == 0x0002A0, "Member 'UBP_CraftingQueue_C::CraftingSlotPanelVisibility' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, PlayerInventory) == 0x0002A8, "Member 'UBP_CraftingQueue_C::PlayerInventory' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, ContentPanelHeight) == 0x0002B0, "Member 'UBP_CraftingQueue_C::ContentPanelHeight' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueue_C, TitleText) == 0x0002B8, "Member 'UBP_CraftingQueue_C::TitleText' has a wrong offset!");

}

