#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F0 - 0x278)
// WidgetBlueprintGeneratedClass BP_QuickSlotsPanel.BP_QuickSlotsPanel_C
class UBP_QuickSlotsPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_131;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        QSPanelHorizontalBox;                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             QuickSlotSize;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WidthPadding;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QuickSlots__PreviewOnly_;                          // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3966[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                QuickSlotKeyBindPrefex;                            // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UBP_QuickSlot_C*>               QuickSlots;                                        // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_QuickSlotsPanel_C* GetDefaultObj();

	void AddQuickSlots(int32 AddAmount, class UBP_QuickSlot_C* NewQuickSlotL, int32 FinalAddAmountL, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, double Temp_real_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool Temp_bool_Variable, int32 CallFunc_GetChildrenCount_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, double K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UBP_QuickSlot_C* CallFunc_Create_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_MakeStruct_Left_ImplicitCast);
	void RemoveQuickSlots(int32 Remove_Amount, class UBP_QuickSlot_C* RemoveSlotL, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UBP_QuickSlot_C* CallFunc_Array_Get_Item);
	void ConstructQuickSlots(int32 QuickSlotsL, bool InvValidL, int32 IndexL, class UBP_QuickSlot_C* NewQuickSlotL, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_QuickSlotsPanel(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue);
};

}


