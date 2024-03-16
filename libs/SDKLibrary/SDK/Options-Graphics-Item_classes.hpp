#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2E8 - 0x278)
// WidgetBlueprintGeneratedClass Options-Graphics-Item.Options-Graphics-Item_C
class UOptionsMinusGraphicsMinusItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CurrentItemLabel;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_322;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               NextItem;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               PreviousItem;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TitleLabel;                                        // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x2A8(0x18)(Edit, BlueprintVisible)
	TArray<class FText>                          Items;                                             // 0x2C0(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentItemNumber;                                 // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5674[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnItemChanged;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UOptionsMinusGraphicsMinusItem_C* GetDefaultObj();

	void ForceItemIndex(int32 CurrentIndex);
	void SetPreviousItem(bool* Succeded, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded);
	void SetNextItem(bool* Succeded, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_SetCurrentItemByIndex_Succeded);
	void SetCurrentItemByIndex(int32 Index, bool UseNotify, bool* Succeded, class FText CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Get_Item_Label_by_Index(int32 Index, class FText* Label, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetItemLabel(class FText Item_Label);
	void UpdateItemDisplay(class FText CallFunc_Get_Item_Label_by_Index_Label);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__OptionsMinusGraphicsMinusItem_PreviousItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OptionsMinusGraphicsMinusItem_NextItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_OptionsMinusGraphicsMinusItem(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_SetNextItem_Succeded, bool CallFunc_SetPreviousItem_Succeded);
	void OnItemChanged__DelegateSignature(int32 Index, class FText Label);
};

}


