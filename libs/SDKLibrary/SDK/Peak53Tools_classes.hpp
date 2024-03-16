#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Peak53Tools.Peak53Tools_C
class UPeak53Tools_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPeak53Tools_C* GetDefaultObj();

	void GetRandomItemFromQuality(enum class E_EquipmenDropChance B, class UObject* __WorldContext, class FName* RandomItem, struct FST_EquipmentData* Out_Row, class FName TempRandom, const TArray<class FName>& ItemList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Find_ReturnValue, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FST_EquipmentData& CallFunc_GetItemInformation_Out_Row, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FST_EquipmentData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Get_Item_Drop(class UObject* __WorldContext, class FName* ResultRandomItem, class FName RandomItem, int64 RandomNumber, int32 DropChance, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_LessEqual_Int64Int64_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int64 CallFunc_RandomInteger64InRange_ReturnValue, TArray<enum class E_EquipmenDropChance>& K2Node_MakeArray_Array, enum class E_EquipmenDropChance CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_GetRandomItemFromQuality_RandomItem, const struct FST_EquipmentData& CallFunc_GetRandomItemFromQuality_Out_Row, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_NameToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetItemTeamUsage(class FName RowName, class UObject* __WorldContext, struct FST_EquipmentData* Out_Row, enum class EPeak53Teams* Seals, bool* Sucess, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int64 CallFunc_ParseStringIntoLong_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FST_EquipmentData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1);
	void GetItemInformation(class FName RowName, class UObject* __WorldContext, struct FST_EquipmentData* Out_Row, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_Conv_NameToString_ReturnValue, int64 CallFunc_ParseStringIntoLong_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FST_EquipmentData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
};

}


