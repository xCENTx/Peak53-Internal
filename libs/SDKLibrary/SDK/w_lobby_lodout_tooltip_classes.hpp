#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2BC - 0x278)
// WidgetBlueprintGeneratedClass w_lobby_lodout_tooltip.w_lobby_lodout_tooltip_C
class UW_lobby_lodout_tooltip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_61;                                      // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_115;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_looby_lodout_tooltip_detail_C*      W_looby_lodout_tooltip_detail;                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_looby_lodout_tooltip_detail_C*      W_looby_lodout_tooltip_detail_1;                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_looby_lodout_tooltip_detail_C*      W_looby_lodout_tooltip_detail_2;                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_looby_lodout_tooltip_detail_C*      W_looby_lodout_tooltip_detail_3;                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                MyLodout;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_lobby_lodout_tooltip_C* GetDefaultObj();

	class FText GetText(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void ExecuteUbergraph_w_lobby_lodout_tooltip(int32 EntryPoint, class UW_looby_lodout_tooltip_detail_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UClass* K2Node_ClassDynamicCast_AsBP_SGKMaster_Character, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_CraftingCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FS_StartingWeaponItem>& Temp_struct_Variable, const struct FS_StartingWeaponItem& CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue_1, const struct FS_ItemDetails& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UW_looby_lodout_tooltip_detail_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
};

}


