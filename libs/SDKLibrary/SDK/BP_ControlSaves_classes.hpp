#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass BP_ControlSaves.BP_ControlSaves_C
class UBP_ControlSaves_C : public USaveGame
{
public:
	TArray<struct FS_ControlsSave>               Controls;                                          // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       MouseSense;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimedSense;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ControlSaves_C* GetDefaultObj();

	void AddControlToSave(class UInputMappingContext* MappingContext, const struct FEnhancedActionKeyMapping& Key, class FName BindNameL, const TArray<struct FKey>& KeyMappingsL, const TArray<class FName>& BindNamesL, int32 ContextIndexL, int32 KeyIndexL, bool FoundKeyL, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TSoftObjectPtr<class UInputMappingContext> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, TSoftObjectPtr<class UInputMappingContext> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, const struct FS_ControlsSave& K2Node_MakeStruct_S_ControlsSave, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FS_ControlsSave& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_ControlsSave& CallFunc_Array_Get_Item_1, const struct FS_ControlsSave& K2Node_MakeStruct_S_ControlsSave_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_ControlsSave& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Max_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
};

}


