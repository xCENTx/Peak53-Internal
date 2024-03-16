#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2A8 - 0x278)
// WidgetBlueprintGeneratedClass BP_RepairActor.BP_RepairActor_C
class UBP_RepairActor_C : public UUserWidget
{
public:
	class UTextBlock*                            NameText;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           EnabledColor;                                      // 0x280(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           DisabledColor;                                     // 0x294(0x14)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_RepairActor_C* GetDefaultObj();

	void Initialize(class FText Actor_Name, bool Enabled);
};

}


