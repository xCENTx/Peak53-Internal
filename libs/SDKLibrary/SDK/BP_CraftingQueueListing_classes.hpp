#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CraftingQueueListing

#include "Basic.hpp"

#include "S_CraftingRecipe_structs.hpp"
#include "S_CraftingQueue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_CraftingQueueListing.BP_CraftingQueueListing_C
// 0x0180 (0x03F8 - 0x0278)
class UBP_CraftingQueueListing_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CraftingRecipeAmount;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CraftingRecipeIcon;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CraftingRecipeNameText;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CraftingRecipeTimer;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   CraftingRecipeRowName;                             // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CraftingTimer;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingRecipe                      CraftingRecipe;                                    // 0x02C0(0x0110)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_CraftingQueue                       CraftingQueueListing;                              // 0x03D0(0x0014)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowIcon;                                          // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4382[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MasterInventory_C*                  CraftingInventory;                                 // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                  PlayerInventory;                                   // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_BP_CraftingQueueListing(int32 EntryPoint);
	void InitializeQueueListing(const struct FS_CraftingQueue& NewQueueListing);
	void PauseListing();
	void ResumeListing();
	void StartTimer();
	void UpdateCraftingAmount();
	void UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing);
	void UpdateCraftingTimer();
	void UpdateListingIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CraftingQueueListing_C">();
	}
	static class UBP_CraftingQueueListing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CraftingQueueListing_C>();
	}
};
static_assert(alignof(UBP_CraftingQueueListing_C) == 0x000008, "Wrong alignment on UBP_CraftingQueueListing_C");
static_assert(sizeof(UBP_CraftingQueueListing_C) == 0x0003F8, "Wrong size on UBP_CraftingQueueListing_C");
static_assert(offsetof(UBP_CraftingQueueListing_C, UberGraphFrame) == 0x000278, "Member 'UBP_CraftingQueueListing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, Button_0) == 0x000280, "Member 'UBP_CraftingQueueListing_C::Button_0' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingRecipeAmount) == 0x000288, "Member 'UBP_CraftingQueueListing_C::CraftingRecipeAmount' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingRecipeIcon) == 0x000290, "Member 'UBP_CraftingQueueListing_C::CraftingRecipeIcon' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingRecipeNameText) == 0x000298, "Member 'UBP_CraftingQueueListing_C::CraftingRecipeNameText' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingRecipeTimer) == 0x0002A0, "Member 'UBP_CraftingQueueListing_C::CraftingRecipeTimer' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingRecipeRowName) == 0x0002A8, "Member 'UBP_CraftingQueueListing_C::CraftingRecipeRowName' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, Timer) == 0x0002B0, "Member 'UBP_CraftingQueueListing_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingTimer) == 0x0002B8, "Member 'UBP_CraftingQueueListing_C::CraftingTimer' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingRecipe) == 0x0002C0, "Member 'UBP_CraftingQueueListing_C::CraftingRecipe' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingQueueListing) == 0x0003D0, "Member 'UBP_CraftingQueueListing_C::CraftingQueueListing' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, ShowIcon) == 0x0003E4, "Member 'UBP_CraftingQueueListing_C::ShowIcon' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, CraftingInventory) == 0x0003E8, "Member 'UBP_CraftingQueueListing_C::CraftingInventory' has a wrong offset!");
static_assert(offsetof(UBP_CraftingQueueListing_C, PlayerInventory) == 0x0003F0, "Member 'UBP_CraftingQueueListing_C::PlayerInventory' has a wrong offset!");

}

