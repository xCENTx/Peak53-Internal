#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B8 (0xB30 - 0x278)
// WidgetBlueprintGeneratedClass WeaponSelection.WeaponSelection_C
class UWeaponSelection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Background;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_165;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SelectWeapon;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_77;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EWeaponCategories                 Category;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_FF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        Out_Row;                                           // 0x2B0(0x878)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_FF3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponSelection_C* GetDefaultObj();

	void UpdateRow(const struct FS_ItemDetails& Out_Row, int32 CurrentIndex, class UDataTable* Data_Table, class FName Row_Name, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FS_StartingWeaponItem& K2Node_MakeStruct_S_StartingWeaponItem, const struct FS_StartingWeaponItem& K2Node_MakeStruct_S_StartingWeaponItem_1, TArray<struct FS_StartingWeaponItem>& K2Node_MakeArray_Array, TArray<struct FS_StartingWeaponItem>& K2Node_MakeArray_Array_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost, const struct FS_CraftingCost& K2Node_MakeStruct_S_CraftingCost_1, TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array_2, TArray<struct FS_CraftingCost>& K2Node_MakeArray_Array_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance_3, bool K2Node_DynamicCast_bSuccess_3);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WeaponSelection_SelectWeapon_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponSelection_SelectWeapon_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ResetColor();
	void Select();
	void ExecuteUbergraph_WeaponSelection(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<class UWeaponSelection_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UWeaponSelection_C* CallFunc_Array_Get_Item, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1);
};

}


