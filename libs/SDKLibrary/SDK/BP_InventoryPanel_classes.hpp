#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2C8 - 0x278)
// WidgetBlueprintGeneratedClass BP_InventoryPanel.BP_InventoryPanel_C
class UBP_InventoryPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            EquipmentTitleText;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HideViewButton;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_30;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WeightText;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WeightText_1;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           GridWidget;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  GridVisibility;                                    // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5096[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 InventoryComponent;                                // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InventoryPanel_C* GetDefaultObj();

	void UpdateWeight(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void InitializeGridPanel(class UBP_MasterInventory_C* Inventory, class UCanvasPanelSlot* EquipmentList, double Scale, class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool CallFunc_SGK_InventoryGridDetails_FoundGrid, const struct FS_CustomGridLayoutData& CallFunc_SGK_InventoryGridDetails_InventoryGridData, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UClass* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IBP_SGKGridInterface_C> K2Node_DynamicCast_AsBP_SGKGrid_Interface, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void BndEvt__HideViewButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UpdateWeightEvent();
	void ExecuteUbergraph_BP_InventoryPanel(int32 EntryPoint, class UPanelWidget* CallFunc_GetParent_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast);
};

}


