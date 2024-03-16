#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass BP_StatText.BP_StatText_C
class UBP_StatText_C : public UUserWidget
{
public:
	class UTextBlock*                            StatAmount;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatName;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StatText_C* GetDefaultObj();

	void UpdateText(class FText Name, double Stat, bool Temp_bool_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_MakeLiteralString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


