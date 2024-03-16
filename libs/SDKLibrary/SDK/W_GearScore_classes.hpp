#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x290 - 0x278)
// WidgetBlueprintGeneratedClass W_GearScore.W_GearScore_C
class UW_GearScore_C : public UUserWidget
{
public:
	class UCommonNumericTextBlock*               GearScoreNumber;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          GearColor;                                         // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_GearScore_C* GetDefaultObj();

	struct FLinearColor GetBrushColor();
};

}


