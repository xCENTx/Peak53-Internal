#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_GlobalRank.FL_GlobalRank_C
class UFL_GlobalRank_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_GlobalRank_C* GetDefaultObj();

	void GetGlobalRankInformation(int32 Value, class UObject* __WorldContext, bool* Sucess, struct FS_GlobalRank* ResultRankInformation, bool TempSucess, const struct FS_GlobalRank& RankInformation, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_GlobalRank& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


