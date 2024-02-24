#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B0 - 0x2A0)
// WidgetBlueprintGeneratedClass WB_Cursor_32x32.WB_Cursor_32x32_C
class UWB_Cursor_32x32_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_48;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Cursor_32x32_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Cursor_32x32(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Tone_1, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Tone_2, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Contrast, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Font, const struct FLinearColor& CallFunc_GetGlobalColors_Overall_Color_Font_Contrast, const struct FLinearColor& CallFunc_GetGlobalColors_OverallColor_White);
};

}


