#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x360 - 0x278)
// WidgetBlueprintGeneratedClass BP_BleedIcon.BP_BleedIcon_C
class UBP_BleedIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Bleed;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_3ABD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BleedIcon;                                         // 0x290(0xD0)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_BleedIcon_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_BleedIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


