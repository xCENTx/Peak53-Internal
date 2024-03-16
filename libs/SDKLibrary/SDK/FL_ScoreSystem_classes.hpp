#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_ScoreSystem.FL_ScoreSystem_C
class UFL_ScoreSystem_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_ScoreSystem_C* GetDefaultObj();

	void GetScoreValue(enum class ENU_ScoreCategory Category, class UObject* __WorldContext, bool* Sucess, struct FS_ScoreValues* ResultInfo, const struct FS_ScoreValues& Result, bool ResultFound, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_ScoreValues& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


