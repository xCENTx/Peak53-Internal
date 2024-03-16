#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3F8 - 0x278)
// WidgetBlueprintGeneratedClass BP_CraftingQueueListing.BP_CraftingQueueListing_C
class UBP_CraftingQueueListing_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CraftingRecipeAmount;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CraftingRecipeIcon;                                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CraftingRecipeNameText;                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CraftingRecipeTimer;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CraftingRecipeRowName;                             // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CraftingTimer;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingRecipe                     CraftingRecipe;                                    // 0x2C0(0x110)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_CraftingQueue                      CraftingQueueListing;                              // 0x3D0(0x14)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowIcon;                                          // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CraftingQueueListing_C* GetDefaultObj();

	void UpdateListingIcon(const struct FS_CraftingRecipe& RecipeL, const struct FS_CraftingCost& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void ResumeListing(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void PauseListing();
	void UpdateCraftingListing(const struct FS_CraftingQueue& QueueListing);
	void UpdateCraftingTimer(const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void UpdateCraftingAmount(class FText CallFunc_Conv_IntToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void InitializeQueueListing(const struct FS_CraftingQueue& NewQueueListing, bool CallFunc_SGK_RecipeDetails_ReturnValue, const struct FS_CraftingRecipe& CallFunc_SGK_RecipeDetails_CraftingRecipe, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, double K2Node_VariableSet_Timer_ImplicitCast);
	void StartTimer();
	void Destruct();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_CraftingQueueListing(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


