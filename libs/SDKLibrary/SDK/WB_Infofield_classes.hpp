#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B8 - 0x2A0)
// WidgetBlueprintGeneratedClass WB_Infofield.WB_Infofield_C
class UWB_Infofield_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_Body;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Head;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Infofield_C* GetDefaultObj();

	void SetInfo(class FText Head, class FText Body);
	void ExecuteUbergraph_WB_Infofield(int32 EntryPoint, class FText K2Node_CustomEvent_Head, class FText K2Node_CustomEvent_Body);
};

}


